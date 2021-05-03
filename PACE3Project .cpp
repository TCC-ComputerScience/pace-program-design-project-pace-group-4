/*Pace Project
  Purpose: To let the user play a one-player game of Battleship
  Written By: Hunter Pollock, Benjamin Johnson, and Zhengyu Jiang
  Last Modified: 4/24/21
  */

  #include <iostream> /*cout*/
  #include <stdlib.h> /*srand, rand*/

  using namespace std;

  enum Ships{MINESWEEPER = 2, FRIGATE = 3, CRUISER = 4, BATTLESHIP = 5};

//  typedef char GameBoard[10][10];
  const int MAX_SIZE = 10;
  struct GameBoard
  {
      char values[MAX_SIZE][MAX_SIZE];
      int numCount;
  };



  //Initializes board with values
  //Pre: None
  //Post: board is filled with char values
  void InitBoard(GameBoard &board);

  //Places a ship into the gameBoard array in a randomized location based on ship type
  //Pre: None
  //Post: A ship is placed onto board in a randomized, valid location
  void PlaceShip(Ships shipType, GameBoard& board);

  //Lets the user play Battleship through a menu system
  //Pre: gameBoard has been declared and has values associated with each member. 5 ships have been placed into board in valid locations
  //Post: The user plays Battleship until they win the game or forfeit
  void PlayGame(GameBoard& board);

  //Prints the game board to the console, with ship locations revealed if printShipLocations is true
  //Pre: The board passed in is defined and has values associated with each member
  //Post: The board is printed to the console
  void PrintBoard(GameBoard board, bool printShipLocations);

  //Checks the user's guess on where the ship is, returning true if they "hit" the ship or false if they "missed"
  //Pre: board has been defined and has values associated with each member. column and row are valid indexes of board (0-9)
  //Post: The function returns a boolean signifying if the user guessed right or not
  bool CheckUserGuess(GameBoard board, int column, int row);

  int main()
  {
      //Declare GameBoard variable board
      GameBoard board;
      board.numCount = MAX_SIZE;

      //Call function InitBoard
      InitBoard(board);

      //Call function PlayGame
      PlayGame(board);
      return 0;
  }
  //************************************************************************************************************
  //Initializes board with values
  //Pre: None
  //Post: board is filled with char values
  void InitBoard(GameBoard& board)
  {
      for (int row = 0; row < 10; row++)
    {
        for (int col = 0; col < 10; col++)
            board.values[row][col] = '~';     //generate random integers
    }

    //Call function PlaceShip
//    PlaceShip(shipType, board);

  }
  //**************************************************************************************************
  //Places a ship into the gameBoard array in a randomized location based on ship type
  //Pre: None
  //Post: A ship is placed onto board in a randomized, valid location
  void PlaceShip(Ships shipType, GameBoard& board)
  {

  }
  //Lets the user play Battleship through a menu system
  //Pre: gameBoard has been declared and has values associated with each member. 5 ships have been placed into board in valid locations
  //Post: The user plays Battleship until they win the game or forfeit
  void PlayGame(GameBoard& board)
  {
      char userInput;
      int rowGuess;
      int columnGuess;
      int shipSunk = 0;
      bool isFinished = false;
      bool isValidInput = false;
      bool result;
      bool printShipLocations;

      //Call function Printboard
      PrintBoard(board, printShipLocations);

      while (isFinished == false)
      {
          cout << "Guess the row(1-10): \n";
          cin >> rowGuess;

          cout << "Guess the column(1-10): \n";
          cin >> columnGuess;

//          result = CheckUserGuess(board, col, row)        //Call function CheckUserGuess
          if (result == true)
          {
              board.values[rowGuess][columnGuess] = 'H';
              cout << "Hit \n";
          }
          else
          {
              board.values[rowGuess][columnGuess] = '.';
              cout << "Miss!\n";
          }
      }

      while (isValidInput == false)
      {
          cout << "Would you like to continue?"
                << "Type Y or N for your answer: \n";
          cin >> userInput;

          if (userInput == 'Y')
            {
                break;
                isValidInput = true;
            }
            else if (userInput == 'N')
            {
                //call Function Revealships
                cout << "Heres where the ship are:\n";

                //call function Printboard
                isFinished = true;
                isValidInput = true;
            }
            else{
                cout << "Error!Bad input detected. Please try again...\n";
                isValidInput = false;
            }
            isValidInput = false;

      }
  }
  //Prints the game board to the console, with ship locations revealed if printShipLocations is true
  //Pre: The board passed in is defined and has values associated with each member
  //Post: The board is printed to the console
  void PrintBoard(GameBoard board, bool printShipLocations)
  {
    for(int row = 0; row < board.numCount; row++)
    {
        for (int col = 0; col < board.numCount; col++)
        {
            if((board.values[row][col] == '#') && (printShipLocations == false))
                cout << "~";
            else
            {
                cout << board.values[row][col];
            }
        }
        cout << endl;

    }
  }
