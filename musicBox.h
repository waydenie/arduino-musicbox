#include "pitches.h"
#include "song_dywtbasm.h"
#include "song_hhello.h"

#define NEXT_PIN 2
#define SPK_PIN 11

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

