#include "pitches.h"
#include "song_dywtbasm.h"
#include "song_hhello.h"

#define NEXT_PIN 2      // Next song interrupt switch 
#define SPK_PIN 11      // Speaker 
#define CRWN_TOP_PIN 10 // Crown top LED
#define CRWN_IL_PIN  3  // Crown inside left LED
#define CRWN_OL_PIN  5  // Crown outside left LED
#define CRWN_OR_PIN  6  // Crown outside right LED
#define CRWN_IR_PIN  9  // Crown inside right LED

#define NOTE_VAL 0
#define NOTE_LEN 1

volatile int melodyNum   = 0;
volatile int currentNote = 1;
volatile int totalNotes  = 0;

int   ms_per8th         = 160;
float ms_interNotePause = 1.3;

const int song_null[][2] PROGMEM = {
  {2,0},
  {NOTE_REST,1}
};
#define NUM_SONGS 3
const int (*songs[])[2] = {song_null,song_dywtbasm,song_hhello};

