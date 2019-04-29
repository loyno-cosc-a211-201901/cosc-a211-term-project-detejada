#include <iostream>
#include <windows.h>
#include <stdlib.h>
#define C1 32
#define Db1 34
#define D1 36
#define Eb1 38
#define E1 41
#define F1 43
#define Gb1 46
#define G1 49
#define Ab1 51
#define A1 55
#define Bb1 58
#define B1 61

#define C2 65
#define Db2 69
#define D2 73
#define Eb2 77
#define E2 82
#define F2 87
#define Gb2 93
#define G2 98
#define Ab2 104
#define A2 110
#define Bb2 117
#define B2 123

#define C3 130
#define Db3 138
#define D3 146
#define Eb3 155
#define E3 165
#define F3 175
#define Gb3 185
#define G3 196
#define Ab3 207
#define A3 220
#define Bb3 233
#define B3 246

#define C4 261
#define Db4 277
#define D4 293
#define Eb4 311
#define E4 329
#define F4 349
#define Gb4 369
#define G4 392
#define Ab4 415
#define A4 440
#define Bb4 466
#define B4 493

#define C5 523
#define Db5 544
#define D5 587
#define Eb5 622
#define E5 659
#define F5 698
#define Gb5 739
#define G5 783
#define Ab5 830
#define A5 880
#define Bb5 932
#define B5 987

#define C6 1046
#define Db6 1108
#define D6 1174
#define Eb6 1244
#define E6 1318
#define F6 1396
#define Gb6 1479
#define G6 1567
#define Ab6 1661
#define A6 1760
#define Bb6 1864
#define B6 1975

#define C7 2093
#define Db7 2217
#define D7 2349
#define Eb7 2489
#define E7 2637
#define F7 2794
#define Gb7 2960
#define G7 3136
#define Ab7 3322
#define A7 3520
#define Bb7 3729
#define B7 3951

using namespace std;

int main()
{
  int sixteenth = 125,
      eighth = 250,
      quarter = 500,
      half = 1000,
      whole = 2000;

  Beep(0, eighth);
  Beep(0, eighth);

    Beep(G5, eighth);
    Beep(Eb5, eighth);
    Beep(D5, eighth);
    Beep(C5, eighth);
    Beep(G5, eighth);
    Beep(Eb5, eighth);
    Beep(D5, eighth);
    Beep(C5, eighth);
    Beep(G5, eighth);
    Beep(Eb5, eighth);
    Beep(D5, eighth);
    Beep(C5, eighth);
    Beep(G5, eighth);
    Beep(Eb5, eighth);
    Beep(D5, eighth);
    Beep(C5, eighth);

    Beep(Ab5, eighth);
    Beep(Eb5, eighth);
    Beep(D5, eighth);
    Beep(C5, eighth);
    Beep(Ab5, eighth);
    Beep(Eb5, eighth);
    Beep(D5, eighth);
    Beep(C5, eighth);
    Beep(Ab5, eighth);
    Beep(Eb5, eighth);
    Beep(D5, eighth);
    Beep(C5, eighth);
    Beep(Ab5, eighth);
    Beep(Eb5, eighth);
    Beep(D5, eighth);
    Beep(C5, eighth);
    Beep(Ab5, eighth);
    Beep(Eb5, eighth);
    Beep(D5, eighth);
    Beep(C5, eighth);
    Beep(Ab5, eighth);
    Beep(Eb5, eighth);
    Beep(D5, eighth);
    Beep(C5, eighth);
    Beep(Ab5, eighth);
    Beep(Eb5, eighth);
    Beep(D5, eighth);
    Beep(C5, eighth);
    Beep(Ab5, eighth);
    Beep(Eb5, eighth);
    Beep(D5, eighth);
    Beep(C5, eighth);

    Beep(G5, eighth);
    Beep(Eb5, eighth);
    Beep(D5, eighth);
    Beep(C5, eighth);
    Beep(G5, eighth);
    Beep(Eb5, eighth);
    Beep(D5, eighth);
    Beep(C5, eighth);
    Beep(G5, eighth);
    Beep(Eb5, eighth);
    Beep(D5, eighth);
    Beep(C5, eighth);
    Beep(G5, eighth);
    Beep(Eb5, eighth);
    Beep(D5, eighth);
    Beep(C5, eighth);

  Beep(Eb4, half);
  Beep(D4, half);

    Beep(G4, eighth);
    Beep(Eb4, eighth);
    Beep(D4, eighth);
    Beep(C4, eighth);
    Beep(G4, eighth);
    Beep(Eb4, eighth);
    Beep(D4, eighth);
    Beep(C4, eighth);

  Beep(Eb4, quarter);
  Beep(G4, quarter);
  Beep(F4, quarter);


    Beep(Ab4, eighth);
    Beep(Eb4, eighth);
    Beep(D4, eighth);
    Beep(C4, eighth);
    Beep(Ab4, eighth);
    Beep(Eb4, eighth);
    Beep(D4, eighth);
    Beep(C4, eighth);

  Beep(F4, half);
  Beep(C4, half);


    Beep(Ab4, eighth);
    Beep(Eb4, eighth);
    Beep(D4, eighth);
    Beep(C4, eighth);
    Beep(Ab4, eighth);
    Beep(Eb4, eighth);
    Beep(D4, eighth);
    Beep(C4, eighth);

  Beep(Eb4, half);

    Beep(G4, eighth);
    Beep(Eb4, eighth);
    Beep(D4, eighth);
    Beep(C4, eighth);
    Beep(G4, eighth);
    Beep(Eb4, eighth);
    Beep(D4, eighth);
    Beep(C4, eighth);
    Beep(G4, eighth);
    Beep(Eb4, eighth);
    Beep(D4, eighth);
    Beep(C4, eighth);

  Beep(Eb5, half);
  Beep(D5, half);


    Beep(G4, eighth);
    Beep(Eb4, eighth);
    Beep(D4, eighth);
    Beep(C4, eighth);
    Beep(G4, eighth);
    Beep(Eb4, eighth);
    Beep(D4, eighth);
    Beep(C4, eighth);

  Beep(Eb5, quarter);
  Beep(G5, quarter);
  Beep(F5, quarter);


    Beep(Ab4, eighth);
    Beep(Eb4, eighth);
    Beep(D4, eighth);
    Beep(C4, eighth);
    Beep(Ab4, eighth);
    Beep(Eb4, eighth);
    Beep(D4, eighth);
    Beep(C4, eighth);

  Beep(F5, half);
  Beep(C5, half);


    Beep(Ab4, eighth);
    Beep(Eb4, eighth);
    Beep(D4, eighth);
    Beep(C4, eighth);
    Beep(Ab4, eighth);
    Beep(Eb4, eighth);
    Beep(D4, eighth);
    Beep(C4, eighth);

  Beep(B5, quarter);
  Sleep(quarter);
  Beep(D5, quarter);
  Sleep(quarter);
  Beep(G5, quarter);
  Sleep(quarter);

  Beep(Eb4, eighth);
  Beep(D4, eighth);
  Beep(C4, eighth);
  Beep(G4, eighth);
  Beep(Eb4, eighth);
  Beep(D4, eighth);
  Beep(C4, eighth);

    Beep(G5, eighth);
    Beep(Eb5, eighth);
    Beep(D5, eighth);
    Beep(C5, eighth);
    Beep(G5, eighth);
    Beep(Eb5, eighth);
    Beep(D5, eighth);
    Beep(C5, eighth);
    Beep(G5, eighth);
    Beep(Eb5, eighth);
    Beep(D5, eighth);
    Beep(C5, eighth);
    Beep(G5, eighth);
    Beep(Eb5, eighth);
    Beep(D5, eighth);
    Beep(C5, eighth);

  return 0;
}
