#include <avr/pgmspace.h>
#include "musicBox.h"

void nextSong() {
  static unsigned long last_interrupt_time = 0;
  unsigned long interrupt_time = millis();
  // If interrupts come faster than 200ms, assume it's a bounce and ignore
  if (interrupt_time - last_interrupt_time > 200) {
    melodyNum=++melodyNum>=NUM_SONGS?1:melodyNum;
    totalNotes = pgm_read_word(&songs[melodyNum][0][NOTE_VAL]);
    currentNote=1;  
    noTone(SPK_PIN);
  }
  last_interrupt_time = interrupt_time;
}

void playNote(int note, int noteLen) {
  int noteDur = ms_per8th * noteLen;
  
  tone(SPK_PIN, note, noteDur);
  delay((int)(ms_interNotePause * noteDur));
  noTone(SPK_PIN);
}

void setup() {

  attachInterrupt(digitalPinToInterrupt(NEXT_PIN), nextSong, RISING);
  totalNotes = pgm_read_word(&songs[melodyNum][0][NOTE_VAL]);

  pinMode(CRWN_TOP_PIN,OUTPUT);digitalWrite(CRWN_TOP_PIN,HIGH);
  pinMode(CRWN_OR_PIN,OUTPUT); digitalWrite(CRWN_OR_PIN,HIGH);
  pinMode(CRWN_IR_PIN,OUTPUT); digitalWrite(CRWN_IR_PIN,HIGH);
  pinMode(CRWN_OL_PIN,OUTPUT); digitalWrite(CRWN_OL_PIN,HIGH);
  pinMode(CRWN_IL_PIN,OUTPUT); digitalWrite(CRWN_IL_PIN,HIGH);
}

void loop() {

  if ( currentNote < totalNotes ) {
    switch (currentNote) {
      case 1: // turn on LED's
        digitalWrite(CRWN_TOP_PIN,LOW); digitalWrite(CRWN_OR_PIN,LOW); digitalWrite(CRWN_IR_PIN,LOW); digitalWrite(CRWN_OL_PIN,LOW); digitalWrite(CRWN_IL_PIN,LOW);
      default:
        playNote(pgm_read_word(&songs[melodyNum][currentNote][NOTE_VAL]),
                 pgm_read_word(&songs[melodyNum][currentNote][NOTE_LEN]));
    } 
    currentNote++;    
  } else { // turn off LED's
        digitalWrite(CRWN_TOP_PIN,HIGH); digitalWrite(CRWN_OR_PIN,HIGH); digitalWrite(CRWN_IR_PIN,HIGH); digitalWrite(CRWN_OL_PIN,HIGH); digitalWrite(CRWN_IL_PIN,HIGH);
  }
}


