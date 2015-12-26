#include <avr/pgmspace.h>
#include "musicBox.h"

void nextSong() {
  melodyNum=++melodyNum>=NUM_SONGS?0:melodyNum;
  totalNotes = pgm_read_word(&songs[melodyNum][0][NOTE_VAL]);
  currentNote=1;  
  noTone(SPK_PIN);
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
}

void loop() {

  if ( currentNote < totalNotes ) {

    playNote(pgm_read_word(&songs[melodyNum][currentNote][NOTE_VAL]),
             pgm_read_word(&songs[melodyNum][currentNote][NOTE_LEN]));

    currentNote++;    
  }
}


