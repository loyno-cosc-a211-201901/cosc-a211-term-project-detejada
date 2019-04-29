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
  float sixteenth = 81.08,
      eighth = 162.16,
      quarter = 324.32,
      half = 648.65,
      whole = 1297.30;

  Beep(0, eighth);
  Beep(0, eighth);
  for (int i = 0; i < 2; i++)
  {
    Beep(D2, 300);
    Beep(A3, 300);
    Beep(A3, 300);
    Beep(E2, sixteenth);
    Beep(E3, sixteenth);
    Beep(B3, half);
    Sleep(eighth);

    Beep(F2, 300);
    Beep(C4, 300);
    Beep(C4, 300);
    Beep(E2, sixteenth);
    Beep(E3, sixteenth);
    Beep(B3, half);
    Sleep(eighth);
  }

  for (int i = 0; i < 2; i++)
  {
    Beep(D3, sixteenth);
    Beep(F3, sixteenth);
    Beep(D4, half);
    Sleep(eighth);

    Beep(D3, sixteenth);
    Beep(F3, sixteenth);
    Beep(D4, half);
    Sleep(eighth);

    Beep(E4, quarter);
    Beep(F4, sixteenth);
    Beep(E4, sixteenth);
    Beep(F4, sixteenth);
    Beep(E4, sixteenth);
    Beep(C4, sixteenth);
    Beep(A3, half);
    Sleep(eighth);

    Beep(A3, eighth);
    Beep(D3, eighth);
    Beep(F3, sixteenth);
    Beep(G3, sixteenth);

    if (i < 1)
    {
      Beep(A3, (half + eighth));
      Sleep(eighth);
      Beep(A3, eighth);
      Beep(D3, eighth);
      Beep(F3, sixteenth);
      Beep(G3, sixteenth);
      Beep(E3, (half + eighth));
      Sleep(eighth);
    }
    else
    {
      Beep(A3, (quarter + eighth));
      Sleep(eighth);
      Beep(A3, eighth);
    }
  }

  for (int i = 0; i < 2; i++)
  {
    Beep(D2, 300);
    Beep(A3, 300);
    Beep(A3, 300);
    Beep(E2, sixteenth);
    Beep(E3, sixteenth);
    Beep(B3, half);
    Sleep(eighth);

    Beep(F2, 300);
    Beep(C4, 300);
    Beep(C4, 300);
    Beep(E2, sixteenth);
    Beep(E3, sixteenth);
    Beep(B3, half);
    Sleep(eighth);
  }


  return 0;
}
