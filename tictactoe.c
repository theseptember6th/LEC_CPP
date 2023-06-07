#include <stdio.h>
#include <stdlib.h>

char board[3][3];
const char PLAYER1 = 'X';
const char PLAYER2 = 'O';

void resetBoard();
void printBoard();
int checkFreeSpaces();
void player1Move();
void player2Move();
char checkWinner();
void printWinner(char);

int main()
{
   char winner = ' ';
      resetBoard();

      while(winner == ' ' && checkFreeSpaces() != 0) // it will run till... checkfreespaces function gives zero value and also winner should be blank
      {
         printBoard();  // board print garyo

         player1Move(); // player 1 ko lagi move
         winner = checkWinner(); // checking for winner....winner ma value assign hunxa
         if(winner != ' ' || checkFreeSpaces() == 0) // winner le empty return garena vane or
                                                      //sabai place bharesakeko xa vane loop bata bahira jane
         {
            break;
         }

         player2Move(); // player 2 ko lagi move
         winner = checkWinner(); // checking for winner....winner ma value assign hunxa
         if(winner != ' ' || checkFreeSpaces() == 0)
         {
            break;
         }
      }

      printBoard();  // board print garne
      printWinner(winner);

  
   printf("Thanks for playing!");

   return 0;
}

void resetBoard()
{
   for(int i = 0; i < 3; i++)
   {
      for(int j = 0; j < 3; j++)
      {
         board[i][j] = ' ';
      }
   }
}
void printBoard()  // board ko design
{
   printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
   printf("\n---|---|---\n");
   printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
   printf("\n---|---|---\n");
   printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
   printf("\n");
}
int checkFreeSpaces()
{
   int freeSpaces = 9;

   for(int i = 0; i < 3; i++)
   {
      for(int j = 0; j < 3; j++)
      {
         if(board[i][j] != ' ')       
         {
            freeSpaces--;             //space ma 0 or X xa vane value ghataudai jane..
                                      // so if sabai 0 ra X le varyo vane ...freespace=0;
                                      //ani program sakenu
         }
      }
   }
   return freeSpaces;
}
void player1Move()  // input ma X place gardene
{
   int x;
   int y;
  
   do
   {
      printf("1st player turn\n");
      printf("Enter row #(1-3): ");
      scanf("%d", &x);
      x=x-1;  // because array starts with 0 so  -1
      printf("Enter column #(1-3): ");
      scanf("%d", &y);
      y=y-1; // because array starts with 0 so  -1

      if(board[x][y] != ' ') { // edi tyo thau ma vareko rahexa vane..invalid print gardene
         printf("Invalid move!\n");
      }
      else  // edi khali xaina vane X rakhdene ani out of loop due to beak;
      {
         board[x][y] = PLAYER1;
         break;   
      }
   } while (board[x][y] != ' ');  // tyo thau khali xa vane..feri loop ma janxa...tara 
                                  // tyo thau ma varyo vane loop sakenxa
                                  // yo case chai tyo if case ko lagi continue wala
                                  // jaba samma euta space varedaina taba samma loop ma janxa
   
}
void player2Move()  // same as player one...player 2 ko input ma chai 0 place garne
{
    int x;
   int y;
 
   do
   {
      printf("second player turn\n");
      printf("Enter row #(1-3): ");
      scanf("%d", &x);
      x=x-1;
      printf("Enter column #(1-3): ");
      scanf("%d", &y);
      y=y-1;

      if(board[x][y] != ' ')
      {
         printf("Invalid move!\n");
      }
      else
      {
         board[x][y] = PLAYER2;
         break;
      }
   } while (board[x][y] != ' ');
}
char checkWinner()
{
   //check rows
   for(int i = 0; i < 3; i++)
   {
      if(board[i][0] == board[i][1] && board[i][0] == board[i][2])
      {
         return board[i][0];
      }
   }
   //check columns
   for(int j = 0; j < 3; j++)
   {
      if(board[0][j] == board[1][j] && board[0][j] == board[2][j])
      {
         return board[0][j];
      }
   }
   //check diagonals
   if(board[0][0] == board[1][1] && board[0][0] == board[2][2])
   {
      return board[0][0];
   }
   if(board[0][2] == board[1][1] && board[0][2] == board[2][0])
   {
      return board[0][2];
   }

   return ' ';  // edi kunai pani condition vayena vane ..empty return gardenxa
}
void printWinner(char winner)
{
   if(winner == PLAYER1)
   {
      printf("PLAYER 1 WIN!");
   }
   else if(winner == PLAYER2)
   {
      printf("PLAYER 2 WIN!");
   }
   else{
      printf("IT'S A TIE!");
   }
}