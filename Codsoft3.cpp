#include <iostream>
#include <ctime>
using namespace std;

void drawBoard (char *spaces);
void playerMove (char *spaces, char player);
void computerMove (char *spaces, char computer );
bool checkWinner (char *spaces, char player, char computer);
bool checkTie (char *spaces);

int main(){
  char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};         // Spaces in the board.
  char player = 'X';                                                      // Character of the player
  char computer = 'O';                                                    // Character of the computer
  bool running = true;

  drawBoard (spaces);

  while (running){                                                        // Actions when the game is running
    playerMove (spaces, player);
    drawBoard (spaces);
    if (checkWinner(spaces, player, computer)){
        cout << "You win!";
        break;
    }
    else if (checkTie(spaces)){
        cout << "It is a Tie!";
        break;
    }

    computerMove (spaces, computer);
    drawBoard (spaces);
    if (checkWinner(spaces, player, computer)){
        cout << "You lose!";
        break;
    }
    else if (checkTie(spaces)){
        cout << "It is a Tie!";
        break;
    }
    }

    cout << "\nThanks for playing.";

  return 0;    
}



void drawBoard (char *spaces){                                        // Layout of the board
  cout << "     |     |     " << '\n';
  cout << "  "<< spaces [0] << "  |  "<< spaces [1] << "  |  "<< spaces [2] << "   " << '\n';
  cout << "_____|_____|_____" << '\n';
  cout << "     |     |     " << '\n';
  cout << "  "<< spaces [3] << "  |  "<< spaces [4] << "  |  "<< spaces [5] << "   " << '\n';
  cout << "_____|_____|_____" << '\n';
  cout << "     |     |     " << '\n';
  cout << "  "<< spaces [6] << "  |  "<< spaces [7] << "  |  "<< spaces [8] << "   " << '\n';
  cout << "                 " << '\n';
  
}
void playerMove (char *spaces, char player)                         // Instructions for the player
{
   int position;
   cout << "Enter your position(1-9): ";
   cin >> position;
   if (position >= 1 || position <= 9 && spaces [position - 1] != ' ')
   {spaces [position - 1] = player;}
   else {
   cout << " Invalid Response! ";                                  // If position exceeds or is lesser than 9 & 1 respectively
   } 
}
void computerMove (char *spaces, char computer ){                  // Movement of the computer
  srand (time(0));
  int position;
  do {position = rand () % 9;}
  while (spaces [position] != ' ');
  spaces[position] = computer;

    
}
bool checkWinner (char *spaces, char player, char computer){       // Conditions to win
    for (int i = 0; i < 3; i++) {
     if ((spaces[i * 3] == player && spaces [i * 3 + 1] == player && spaces [i * 3 + 2] == player && spaces [i * 3] != ' ') || 
     (spaces[i] == player && spaces [i + 3] == player && spaces [i + 6] == player && spaces [i] != ' ' ))
     {return true;}
    }
    if ( (spaces [0] == spaces [4] && spaces [4] == spaces [8] && spaces[0] != ' ') ||
  (spaces [2] == spaces [4] && spaces [4] == spaces [6] && spaces[2] != ' '))
  {return true;}
  return false;
}
bool checkTie (char *spaces){                                      // Conditions to tie
  for (int i = 0; i < 9; i++){
    if (spaces [i] == ' ')
    {return false;
    }
  }
    return true;
    
}


