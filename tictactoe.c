#include <stdio.h>

#define MAXROW 4 //rows in board
#define MAXCOL 4 //columns in board

//tic tac toe game

static int VAL1 = 13; //prime number value for player one (a*VAL1 % a*VAL2 > 0, for small numbers)
static char SYM1 = 'x'; //display character for player one
static int VAL2 = 17; //prime number value for player two (a*VAL2 % a*VAL1 > 0, for small numbers)
static char SYM2 = 'o'; //display character for player two

void printBoard(int board[MAXCOL][MAXROW]); //prints the board
char convert(int val); //converts values to x's and o'x


void main()
{
  int board[MAXCOL][MAXROW];
  
  printf("Welcome to this fun game of tic tac toe!\n");
  printf("This game is for 2 human players\n");
  printf("Here is the board:\n\n");

  printBoard(board);
  printf("\n");
  board[2][3] = VAL1;

  //board[i][j] = &VAL1/2

  
}


void printBoard(int board[MAXCOL][MAXROW])
{
  int i, j;

  for (i = 0; i < MAXROW; i++) {
    printf("|");
    for (j = 0; j < MAXCOL; j++)
      printf("%d|", convert(board[j][i]));
    printf("\n");
  }
}


char convert(int val)
{
  char c;

  if(val == VAL1)
    c = SYM1;
  else if(val == VAL2)
    c = SYM2;
  else
    c = ' ';

  return c;
}


      
    
  
