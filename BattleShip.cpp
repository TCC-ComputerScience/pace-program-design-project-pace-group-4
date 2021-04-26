/* Battleship Part 1
The program uses a two-dimensional array as the basis for creating a one-player game of battleship.
(The computer generates the board and places the ships, and then the player has to guess the ship positions.)
PACE 4
April 26, 2021
*/
// Original Pseudocode by Christiney Ponton
// Designed by all group 4 members
// Commented by Nolan Marchione
#include <iostream>
#include <iomanip>

using namespace std;

// Array Values
const int SEA_ROW = 10; // Row Maximum
const int SEA_COL = 10; // Column Maximum

// Pre: User started game of battleship
// Initialize the game board
// Post: Game board has been properly initialized for use
void getBoard();

// Pre: The game board has been properly initialized
// Print the game board
// Post: When the function is called, print the board with current game values
void printBoard();

// Pre: The game board has been properly initialized
// Create the ships and set their location
// Post: The ships have been properly initalized
void setShips();

// Pre: The ships have been created and set on the board
// Keeps the ships location on the board hidden from the user
// Post: Ship is either hidden or shown on the board
void shipLoc();

// Pre: Everything has been properly initalized, user has guessed a ship location
// Checks if the given coordinates match that of a ship
// Post: Return the outcome of guessed location, true if the user hit a ship and false if the user missed
bool FindLoc()


int main()
{
  int seaArray[SEA_ROW][SEA_COL]; //2D array
  bool found = false;

  //call functions


}
