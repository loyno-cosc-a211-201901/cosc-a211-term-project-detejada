// This program uses the Beep() and Sleep() functions to play simple songs that the user chooses from a list.
// Beep() is used to produce sound, Sleep() is used for delays between notes in the case of rests.

#include <iostream>
#include <windows.h> // For Beep() and Sleep()
#include <stdlib.h>

/* Defining note frequencies in Hz. I decided to cover my bases and define frequencies chromatically,
hence why I also include flats. For example, A4 = A, while Ab4 is 1 semitone below it, making Ab4 = A-flat/G-sharp.
I decided to #define all their values rather than declare them all as consts because, as I understand it, #defining them
doesn't force the program to allocate memory for them. */
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

void playMarioTheme()
{
  // Defining note and rest lengths in ms. BPM = 200.
  int sixteenth = 75,
      eighth = 150,
      quarter = 300,
      half = 600,
      whole = 1200;

  Beep(0, eighth); // For some reason Beep() has tended to skip the first note, so this line serves as a blank note for the function to skip
  Beep(E4, eighth);
  Beep(E4, eighth);
  Sleep(eighth);
  Beep(E4, eighth);
  Sleep(eighth);
  Beep(C4, eighth);
  Beep(E4, quarter);
  Beep(G4, quarter);
  Sleep(quarter);
  Beep(G3, quarter);
  Sleep(quarter);

  for(int i = 0; i < 2; i++) // Repeat
  {
    Beep(C4, quarter);
    Sleep(eighth);
    Beep(G3, quarter);
    Sleep(eighth);
    Beep(E3, quarter);
    Sleep(eighth);
    Beep(A3, quarter);
    Beep(B3, quarter);
    Beep(Bb3, eighth);
    Beep(A3, quarter);
    Beep(G3, 200);
    Beep(E4, 200); // Half-note triplets.
    Beep(G4, 200);
    Beep(A4, quarter);
    Beep(F4, eighth);
    Beep(G4, eighth);
    Sleep(eighth);
    Beep(E4, quarter);
    Beep(C4, eighth);
    Beep(D4, eighth);
    Beep(B3, quarter);
  }

  Sleep(quarter);
  Beep(G4, eighth);
  Beep(Gb4, eighth);
  Beep(F4, eighth);
  Beep(Eb4, quarter);
  Beep(E4, eighth);
  Sleep(eighth);
  Beep(Ab3, eighth);
  Beep(A3, eighth);
  Beep(C4, eighth);
  Sleep(eighth);
  Beep(A3, eighth);
  Beep(C4, eighth);
  Beep(D4, eighth);
  Sleep(quarter);
  Beep(G4, eighth);
  Beep(Gb4, eighth);
  Beep(F4, eighth);
  Beep(Eb4, quarter);
  Beep(E4, eighth);
  Sleep(eighth);
  Beep(C5, eighth);
  Sleep(eighth);
  Beep(C5, eighth);
  Beep(C5, quarter);
  Sleep(half);
  Beep(G4, eighth);
  Beep(Gb4, eighth);
  Beep(F4, eighth);
  Beep(Eb4, quarter);
  Beep(E4, eighth);
  Sleep(eighth);
  Beep(Ab3, eighth);
  Beep(A3, eighth);
  Beep(C4, eighth);
  Sleep(eighth);
  Beep(A3, eighth);
  Beep(C4, eighth);
  Beep(D4, eighth);
  Sleep(quarter);
  Beep(Eb4, eighth);
  Sleep(quarter);
  Beep(D4, eighth);
  Sleep(quarter);
  Beep(C4, eighth);
}

void playTetrisTheme()
{
  // Defining note and rest lengths in ms. BPM = 200.
  int sixteenth = 75,
      eighth = 150,
      quarter = 300,
      half = 600,
      whole = 1200;

  Beep(0, quarter); // Skipped line
  Beep(E4, (quarter + eighth));
  Beep(B3, eighth);
  Beep(C4, eighth);
  Beep(D4, (quarter + eighth));
  Beep(C4, eighth);
  Beep(B3, eighth);
  Beep(A3, (quarter + eighth));
  Beep(A3, eighth);
  Beep(C4, eighth);
  Beep(E4, (quarter + eighth));
  Beep(D4, eighth);
  Beep(C4, eighth);
  Beep(B3, (quarter + eighth));
  Beep(B3, eighth);
  Beep(C4, eighth);
  Beep(D4, (quarter + eighth));
  Beep(E4, (quarter + eighth));
  Beep(C4, (quarter + eighth));
  Beep(A3, (quarter + eighth));
  Beep(A3, (quarter + eighth));
  Sleep(half);

  Beep(D4, (quarter + eighth));
  Beep(F4, eighth);
  Beep(A4, (quarter + eighth));
  Beep(G4, eighth);
  Beep(F4, eighth);
  Beep(E4, half);
  Beep(C4, eighth);
  Beep(E4, (quarter + eighth));
  Beep(D4, eighth);
  Beep(C4, eighth);
  Beep(B3, (quarter + eighth));
  Beep(B3, eighth);
  Beep(C4, eighth);
  Beep(D4, (quarter + eighth));
  Beep(E4, (quarter + eighth));
  Beep(C4, (quarter + eighth));
  Beep(A3, (quarter + eighth));
  Beep(A3, (quarter + eighth));
  Sleep((quarter + eighth));

  Beep(E3, (half + eighth));
  Beep(C3, (half + eighth));
  Beep(D3, (half + eighth));
  Beep(B2, (half + eighth));
  Beep(C3, (half + eighth));
  Beep(A2, (half + eighth));
  Beep(Gb2, (half + eighth));
  Beep(B2, (half + eighth));
  Beep(E3, (half + eighth));
  Beep(C3, (half + eighth));
  Beep(D3, (half + eighth));
  Beep(B2, (half + eighth));
  Beep(C3, quarter);
  Beep(E3, (quarter + eighth));
  Beep(A3, (quarter + eighth));
  Beep(A3, (quarter + eighth));
  Beep(Ab3, whole);

  Beep(E5, quarter);
  Beep(E5, (quarter + eighth));
  Beep(B4, eighth);
  Beep(C5, eighth);
  Beep(D5, (quarter + eighth));
  Beep(C5, eighth);
  Beep(B4, eighth);
  Beep(A4, (quarter + eighth));
  Beep(A4, eighth);
  Beep(C5, eighth);
  Beep(E5, (quarter + eighth));
  Beep(D5, eighth);
  Beep(C5, eighth);
  Beep(B4, (quarter + eighth));
  Beep(B4, eighth);
  Beep(C5, eighth);
  Beep(D5, (quarter + eighth));
  Beep(E5, (quarter + eighth));
  Beep(C5, (quarter + eighth));
  Beep(A4, (quarter + eighth));
  Beep(A4, (quarter + eighth));
  Sleep(half);

  Beep(D5, (quarter + eighth));
  Beep(F5, eighth);
  Beep(A5, (quarter + eighth));
  Beep(G5, eighth);
  Beep(F5, eighth);
  Beep(E5, half);
  Beep(C5, eighth);
  Beep(E5, (quarter + eighth));
  Beep(D5, eighth);
  Beep(C5, eighth);
  Beep(B4, (quarter + eighth));
  Beep(B4, eighth);
  Beep(C5, eighth);
  Beep(D5, (quarter + eighth));
  Beep(E5, (quarter + eighth));
  Beep(C5, (quarter + eighth));
  Beep(A4, (quarter + eighth));
  Beep(A4, (quarter + eighth));
}

void beginDearlyBeloved() // First part of Dearly Beloved
{
  // Defining note and rest lengths in ms. BPM = 120.
  int sixteenth = 125,
      eighth = 250,
      quarter = 500,
      half = 1000,
      whole = 2000;

  Beep(0, quarter); // Skip tone

  for(int i = 0; i < 2; i++) // for loop for repeated section
  {
    for(int j = 0; j < 2; j++) // This first phrase is repeated, so a for loop is used here too
    {
      Beep(C4, (quarter + eighth));
      Beep(C4, eighth);
      Beep(G3, (quarter + eighth));
      Beep(G3, eighth);
      Beep(F3, (quarter + eighth));
      Beep(F3, eighth);
      Beep(D4, (quarter + eighth));
      Beep(D4, eighth);
    }

    Beep(E4, (quarter + eighth));
    Beep(E4, eighth);
    Beep(D4, (quarter + eighth));
    Beep(D4, eighth);
    Beep(G4, (quarter + eighth));
    Beep(G4, eighth);
    Beep(F4, (sixteenth / 2));
    Beep(G4, (sixteenth / 2));
    Beep(F4, (quarter + sixteenth));
    Beep(F4, eighth);
    Beep(E4, (quarter + eighth));
    Beep(E4, eighth);
    Beep(D4, (quarter + eighth));
    Beep(D4, eighth);
    Beep(C4, (quarter + eighth));
    Beep(C4, eighth);

    if (i < 1) // First ending
    {
      Beep(Bb3, (quarter + eighth));
      Beep(Bb3, eighth);
    }
    else // Second ending
    {
      Beep(G4, (quarter + eighth));
      Beep(G4, eighth);
    }
  }
}

void adagioDearlyBeloved() // Second part of Dearly Beloved
{
  // Adagio. Slower tempo requires new definitions for interval lengths
  int sixteenth = 188,
      eighth = 375,
      quarter = 750,
      half = 1500,
      whole = 3000;

  for(int i = 0; i < 2; i++) // Repeated section #1
  {
    Beep(C4, quarter);
    Sleep(eighth);
    Beep(G3, quarter);
    Sleep(eighth);
    Beep(F3, quarter);
    Sleep(eighth);
    Beep(D4, eighth);
    Sleep(sixteenth);
    Beep(Bb3, eighth);
    Sleep(sixteenth);
    Beep(C4, quarter);
    Sleep(eighth);
    Beep(G3, quarter);
    Sleep(eighth);
    Beep(F3, quarter);
    Sleep(eighth);
    Beep(D4, quarter);
    Sleep(eighth);

    if (i < 1) // First ending
    {
      Beep(E4, quarter);
      Sleep(eighth);
      Beep(D4, quarter);
      Sleep(eighth);
      Beep(G4, quarter);
      Sleep(eighth);
      Beep(A4, eighth);
      Sleep(sixteenth);
      Beep(Bb4, eighth);
      Sleep(sixteenth);
      Beep(G4, eighth);
      Sleep(sixteenth);
      Beep(F4, eighth);
      Sleep(sixteenth);
      Beep(G4, quarter);
      Sleep(eighth);
      Beep(C4, quarter);
      Sleep(eighth);
      Beep(Bb3, quarter);
      Sleep(eighth);
    }
    else // Second ending
    {
      Beep(E4, eighth);
      Sleep(sixteenth);
      Beep(D4, eighth);
      Sleep(sixteenth);
      Beep(C4, half);
      Sleep(eighth);
      Beep(G4, quarter);
      Sleep(eighth);
      Beep(E4, quarter);
      Sleep(eighth);
      Beep(D4, quarter);
      Sleep(eighth);
      Beep(C4, quarter);
      Sleep(eighth);
      Beep(Bb3, quarter);
      Sleep(eighth);
    }
  }

  for(int j = 0; j < 2; j++) // Repeated section #2
  {
    Beep(C4, quarter);
    Sleep(eighth);
    Beep(G3, quarter);
    Sleep(eighth);
    Beep(F3, quarter);
    Sleep(eighth);
    Beep(D4, eighth);
    Sleep(sixteenth);
    Beep(Bb3, eighth);
    Sleep(sixteenth);
    Beep(C4, quarter);
    Sleep(eighth);
    Beep(G4, half);
    Sleep(eighth);
    Beep(F4, quarter);
    Sleep(eighth);

    if (j < 1) // First ending
    {
      Beep(G4, (half + quarter));
      Sleep(eighth);
      Beep(A4, eighth);
      Sleep(sixteenth);
      Beep(Bb4, eighth);
      Sleep(sixteenth);
      Beep(G4, eighth);
      Sleep(sixteenth);
      Beep(F4, eighth);
      Sleep(sixteenth);
      Beep(G4, (half + quarter));
      Sleep(eighth);
    }
    else // Second ending
    {
      Beep(E4, eighth);
      Sleep(sixteenth);
      Beep(D4, eighth);
      Sleep(sixteenth);
      Beep(C4, half);
      Sleep(eighth);
      Beep(G4, quarter);
      Sleep(eighth);
      Beep(C5, (quarter + eighth));
      Beep(G4, (quarter + eighth));
      Sleep(sixteenth);
      Beep(F4, (eighth + sixteenth));
      Sleep((sixteenth / 2));
      Beep(E4, (eighth + sixteenth));
      Sleep(quarter);
    }
  }

  Beep(C5, quarter);
  Sleep(eighth);
  Beep(G4, quarter);
  Sleep(eighth);
  Beep(F4, quarter);
  Sleep(eighth);
  Beep(D4, quarter);
  Sleep(eighth);
  Beep(C4, quarter);
  Sleep((eighth + sixteenth));
  Beep(G3, quarter);
  Sleep((eighth + sixteenth));
  Beep(F3, quarter);
  Sleep(quarter);
  Beep(D3, quarter);
  Sleep(quarter);

  Beep(A2, (eighth + sixteenth));
  Beep(E3, eighth);
  Sleep(sixteenth);
  Beep(A3, eighth);
  Sleep(sixteenth);
  Beep(Bb3, eighth);
  Sleep(sixteenth);
  Beep(C4, eighth);
  Sleep(sixteenth);
  Beep(E4, eighth);
  Sleep(sixteenth);
  Beep(A4, eighth);
  Sleep(sixteenth);
  Beep(Bb4, eighth);
  Sleep(eighth);
  Beep(C5, half);
  Sleep(eighth);
}

void playDearlyBeloved() // Puts Dearly Beloved parts together
{
  beginDearlyBeloved();
  adagioDearlyBeloved();
}

void beginSongOfTime() // First part of Song of Time
{
  // BPM = 120.
  int sixteenth = 125,
      eighth = 250,
      quarter = 500,
      half = 1000,
      whole = 2000;

  Beep(A5, quarter);
  Beep(D5, half);
  Beep(F5, quarter);
  Beep(A5, quarter);
  Beep(D5, half);
  Beep(F5, quarter);
  Beep(A5, eighth);
  Beep(C6, eighth);
  Beep(B5, quarter);
  Beep(G5, quarter);
  Beep(F5, eighth);
  Beep(G5, eighth);
  Beep(A5, quarter);
  Beep(D5, quarter);
  Beep(C5, eighth);
  Beep(E5, eighth);
  Beep(D5, (whole + quarter));

}

void adagioSongOfTime() // Second part of Song of Time
{
  // Adagio, slower tempo
  int sixteenth = 188,
      eighth = 375,
      quarter = 750,
      half = 1500,
      whole = 3000;

  Beep(A4, quarter);
  Beep(D4, half);
  Beep(F4, quarter);
  Beep(A4, quarter);
  Beep(D4, half);
  Beep(F4, quarter);
  Beep(A4, eighth);
  Beep(C5, eighth);
  Beep(B4, quarter);
  Beep(G4, quarter);
  Beep(F4, eighth);
  Beep(G4, eighth);
  Beep(A4, quarter);
  Beep(D4, quarter);
  Beep(C4, eighth);
  Beep(E4, eighth);
  Beep(D4, whole);
  Sleep(quarter);

  for(int i = 0; i < 2; i++)
  {
    Beep(D4, eighth);
    Beep(C4, eighth);
    Beep(E4, quarter);
    Beep(C4, quarter);
    Beep(E4, eighth);
    Beep(F4, eighth);
    Beep(D4, (half + quarter));
    Sleep(quarter);
  }

  Beep(A4, eighth);
  Beep(C5, eighth);
  Beep(B4, quarter);
  Beep(C5, quarter);
  Beep(A4, quarter);
  Beep(C5, quarter);
  Beep(G4, quarter);
  Beep(A4, quarter);
  Beep(D4, eighth);
  Beep(C4, eighth);
  Beep(E4, quarter);
  Beep(D4, (half + quarter));
  Beep(F4, eighth);
  Beep(G4, eighth);
  Beep(F4, quarter);
  Beep(G4, quarter);
  Beep(E4, eighth);
  Beep(C4, eighth);
  Beep(F4, quarter);
  Beep(E4, quarter);
  Beep(D4, (half + quarter));
}

void playSongOfTime() // Puts Song of Time together
{
  beginSongOfTime();
  adagioSongOfTime();
}

void playSongOfStorms()
{
  int sixteenth = 63,
      eighth = 125,
      quarter = 250,
      half = 500,
      whole = 1000;

  for(int i = 0; i < 2; i++)
  {
    Beep(D2, quarter);
    Beep(A3, quarter);
    Beep(A3, quarter);
    Beep(E2, eighth);
    Beep(E3, eighth);
    Beep(B3, half);
    Sleep(eighth);

    Beep(F2, quarter);
    Beep(C4, quarter);
    Beep(C4, quarter);
    Beep(E2, eighth);
    Beep(E3, eighth);
    Beep(B3, half);
    Sleep(eighth);
  }

  for(int j = 0; j < 2; j++)
  {
    Beep(D3, eighth);
    Beep(F3, eighth);
    Beep(D4, half);
    Sleep(eighth);

    Beep(D3, eighth);
    Beep(F3, eighth);
    Beep(D4, half);
    Sleep(eighth);

    Beep(E4, (quarter + eighth));
    Beep(F4, eighth);
    Beep(E4, eighth);
    Beep(F4, eighth);
    Beep(E4, eighth);
    Beep(C4, eighth);
    Beep(A3, half);
    Sleep(eighth);

    Beep(A3, quarter);
    Beep(D3, quarter);
    Beep(F3, eighth);
    Beep(G3, eighth);

    if (j < 1)
    {
      Beep(E3, (half + quarter));
    }
    else
    {
      Beep(A3, half);
      Beep(A3, quarter);
    }
  }

  for(int i = 0; i < 2; i++)
  {
    if (i < 1)
    {
      Beep(D3, quarter);
    }
    else
    {
      Beep(D2, quarter);
    }
    Beep(A3, quarter);
    Beep(A3, quarter);
    Beep(E2, eighth);
    Beep(E3, eighth);
    Beep(B3, half);
    Sleep(eighth);

    Beep(F2, quarter);
    Beep(C4, quarter);
    Beep(C4, quarter);
    Beep(E2, eighth);
    Beep(E3, eighth);
    Beep(B3, half);
    Sleep(eighth);
  }

  for(int j = 0; j < 2; j++)
  {
    Beep(D4, eighth);
    Beep(F4, eighth);
    Beep(D5, half);

    Beep(D4, eighth);
    Beep(F4, eighth);
    Beep(D5, half);

    Beep(E5, (quarter + eighth));
    Beep(F5, eighth);
    Beep(E5, eighth);
    Beep(F5, eighth);
    Beep(E5, eighth);
    Beep(C5, eighth);
    Beep(A4, half);
    Sleep(eighth);

    Beep(A4, quarter);
    Beep(D4, quarter);
    Beep(F4, eighth);
    Beep(G4, eighth);

    if (j < 1)
    {
      Beep(E4, (half + quarter));
    }
    else
    {
      Beep(A4, half);
      Beep(A4, quarter);
    }
  }

  for(int i = 0; i < 2; i++)
  {
    if (i < 1)
    {
      Beep(D4, quarter);
    }
    else
    {
      Beep(D3, quarter);
    }
    Beep(A4, quarter);
    Beep(A4, quarter);
    Beep(E3, eighth);
    Beep(E4, eighth);
    Beep(B4, half);
    Sleep(eighth);

    Beep(F3, quarter);
    Beep(C5, quarter);
    Beep(C5, quarter);
    Beep(E3, eighth);
    Beep(E4, eighth);
    Beep(B4, half);
    Sleep(eighth);
  }

  Beep(A4, eighth);
  Beep(D4, (half + quarter));
}

int userGoAgain() // Asks user if they want to select a new song after playing previously selected song
{
  int userChoice;
  char goAgain; // user input for yes or no

  cout <<  "     Would you like to go again? Yes (Y, y) or No (N, n)? ";
    cin >> goAgain;

    switch (goAgain)
    {
      case 'Y':
      case 'y':
      cout << "\n";
        cout << "     Great! Make a new selection (1-4):\n\n";
        userChoice = 0; // Resets userChoice
        break;

      case 'N':
      case 'n':
        cout << "\n";
        cout << "     Okay, closing the program...\n";
        userChoice = 6; // Sets userChoice to 'Quit' so that the do-while loop can end.
        break;

      default:
        cout << "     Please give a valid response by pressing 'Y' for Yes or 'N' for No: ";
          cin >> goAgain;
          break;
    }

  return userChoice; // Allows main() to accept function's editing of userChoice
}

int main()
{
  int userChoice;

  cout << "     Welcome to the Beep() Music Box! Below are some example songs for you to play:\n\n";
  do
  {
    cout << "\t" << "1. 'Super Mario Bros. Theme'\n";
    cout << "\t" << "2. 'Korobeiniki' from Tetris\n";
    cout << "\t" << "3. 'Dearly Beloved' from Kingdom Hearts\n";
    cout << "\t" << "4. 'Song of Time' from Ocarina of Time\n";
    cout << "\t" << "5. 'Song of Storms' from Ocarina of Time\n";
    cout << "\t" << "6. Quit\n\n";
    cout << "     What do you choose? ";
      cin >> userChoice;

    switch (userChoice)
    {
      case 1:
        cout << "     Playing 'Super Mario Bros. Theme'\n";
        playMarioTheme();

        userChoice = userGoAgain();
            break;

      case 2:
        cout << "     Playing 'Korobeiniki'\n";
        playTetrisTheme();

        userChoice = userGoAgain();
            break;

      case 3:
        cout << "     Playing 'Dearly Beloved'\n";
        playDearlyBeloved();

        userChoice = userGoAgain();
            break;

      case 4:
        cout << "     Playing 'Song of Time'\n";
        playSongOfTime();

        userChoice = userGoAgain();
            break;

      case 5:
        cout << "     Playing 'Song of Storms'\n";
        playSongOfStorms();

        userChoice = userGoAgain();
            break;

      case 6:
        cout << "     Okay, no music shall be played.\n";
          break;

      default:
        cout << "\t" << "Please input a valid selection: ";
          cin >> userChoice;
            break;
    }
  } while(userChoice != 6);

  return 0;
}
