const int song_lroyals[][2] PROGMEM = {
  {175,150}, // {Total Number of Notes, Base ms duration per note (16th notes)}

  {NOTE_REST,11},{NOTE_A3,1},  {NOTE_A3,1}, {NOTE_A3,1},  {NOTE_A3,1}, {NOTE_A3,1},               //Bar  2
  {NOTE_D4,2},   {NOTE_D4,2},  {NOTE_C4,2}, {NOTE_C4,1},  {NOTE_A3,9},                            //Bar  3
  {NOTE_REST,11},{NOTE_A3,1},  {NOTE_A3,2}, {NOTE_A3,2},                                          //Bar  4
  {NOTE_D4,2},   {NOTE_D4,2},  {NOTE_C4,1}, {NOTE_C4,2},  {NOTE_A3,7}, {NOTE_G3,1}, {NOTE_G3,1},  //Bar  5
  {NOTE_A3,1},   {NOTE_G3,1},  {NOTE_FS3,6},{NOTE_REST,3},{NOTE_A3,1}, {NOTE_A3,2}, {NOTE_A3,2},  //Bar  6
  {NOTE_D4,2},   {NOTE_D4,2},  {NOTE_C4,1}, {NOTE_C4,2},  {NOTE_D4,1}, {NOTE_C4,1}, {NOTE_A3,7},  //Bar  7
  {NOTE_REST,10},{NOTE_D4,1},  {NOTE_D4,1}, {NOTE_D4,2},  {NOTE_G4,2},                            //Bar  8
  {NOTE_FS4,8},  {NOTE_REST,2},{NOTE_D4,2}, {NOTE_D4,2},  {NOTE_G4,2},                            //Bar  9
  {NOTE_D4,1},   {NOTE_C4,2},  {NOTE_A3,4}, {NOTE_REST,2},{NOTE_D4,1}, {NOTE_D4,1}, {NOTE_E4,1}, {NOTE_FS4,1},{NOTE_E4,1},{NOTE_D4,2},  //Bar 10
  {NOTE_A3,2},   {NOTE_A3,2},  {NOTE_D4,2}, {NOTE_D4,2},  {NOTE_FS4,1},{NOTE_FS4,1},{NOTE_FS4,1},{NOTE_FS4,1},{NOTE_D4,2},{NOTE_D4,2},  //Bar 11
  {NOTE_A3,2},   {NOTE_A3,2},  {NOTE_D4,2}, {NOTE_D4,2},  {NOTE_FS4,1},{NOTE_FS4,1},{NOTE_FS4,1},{NOTE_FS4,1},{NOTE_D4,2},{NOTE_D4,2},  //Bar 12
  {NOTE_E4,1},   {NOTE_D4,2},  {NOTE_E4,5}, {NOTE_REST,9},{NOTE_E4,1}, {NOTE_D4,1}, {NOTE_E4,1},  //Bar 13
  {NOTE_A4,1},   {NOTE_A4,1},  {NOTE_A4,2}, {NOTE_A4,1},  {NOTE_E4,2}, {NOTE_F4,2}, {NOTE_D4,1}, {NOTE_D4,1}, {NOTE_E4,1},{NOTE_FS4,1},{NOTE_E4,1},{NOTE_D4,2}, //Bar 14
  {NOTE_A4,2},   {NOTE_A4,2},  {NOTE_D4,2}, {NOTE_D4,2},  {NOTE_FS4,1},{NOTE_FS4,1},{NOTE_FS4,1},{NOTE_FS4,1},{NOTE_D4,2},{NOTE_D4,2},  //Bar 15
  {NOTE_A3,2},   {NOTE_A3,2},  {NOTE_D4,2}, {NOTE_D4,2},  {NOTE_FS4,1},{NOTE_FS4,1},{NOTE_FS4,1},{NOTE_FS4,1},{NOTE_D4,2},{NOTE_D4,2},  //Bar 16
  {NOTE_E4,1},   {NOTE_D4,2},  {NOTE_E4,5}, {NOTE_REST,5},{NOTE_C4,1}, {NOTE_C4,2},               //Bar 17
  {NOTE_B3,1},   {NOTE_B3,1},  {NOTE_B3,1}, {NOTE_B3,1},  {NOTE_B3,2}, {NOTE_A3,1}, {NOTE_B3,4}, {NOTE_REST,5},                         //Bar 18
  {NOTE_REST,8}, {NOTE_A4,4},  {NOTE_FS4,8},                                                      //Bar 19
                 {NOTE_REST,4},{NOTE_A4,4}, {NOTE_FS4,4},                                         //Bar 20
  {NOTE_REST,8}, {NOTE_C4,4},  {NOTE_E4,4},                                                       //Bar 21
  {NOTE_D4,4},   {NOTE_REST,6},{NOTE_D4,1}, {NOTE_D4,1},  {NOTE_D4,1}, {NOTE_E4,1}, {NOTE_FS4,2}, //Bar 22
  {NOTE_A4,4},   {NOTE_FS4,4}, {NOTE_D5,4}, {NOTE_A4,4},                                          //Bar 23
  {NOTE_FS4,1},  {NOTE_FS4,1}, {NOTE_FS4,1},{NOTE_FS4,1}, {NOTE_FS4,1},{NOTE_G4,1}, {NOTE_A4,6}, {NOTE_REST,3},{NOTE_FS4,1},{NOTE_A4,1},{NOTE_A4,1},{NOTE_A4,1},{NOTE_G4,1},      //Bar 24
  {NOTE_G4,4},   {NOTE_C5,2},  {NOTE_C5,4}, {NOTE_E5,2},  {NOTE_E5,4},                            //Bar 25
  {NOTE_REST,6}, {NOTE_D4,1},  {NOTE_D4,1}, {NOTE_FS4,2}, {NOTE_FS4,2},{NOTE_FS4,1},{NOTE_E4,1}, {NOTE_D4,2} //Bar 26
};
