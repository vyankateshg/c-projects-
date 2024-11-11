#include <stdio.h>
#include <conio.h>
#include <time.h>

 void system();
char board[]={'0','1','2','3','4','5','6','7','8','9'};
void printf_board () { 
    system ("cls");
    printf("\nVg_coder \n");
    printf("         |         |        \n");
    printf("     %c   |    %c    |    %c   \n",board[1],board[2],board[3]);
    printf("         |         |        \n");
    printf("_________|_________|________\n");
    printf("         |         |        \n");
    printf("    %c    |    %c    |    %c   \n",board[4],board[5],board[6]);
    printf("         |         |        \n");
    printf("_________|_________|________\n");
    printf("         |         |        \n");
    printf("         |         |        \n"); 
    printf("    %c    |    %c    |    %c  \n",board[7],board[8],board[9]);
    printf("         |         |        \n");
    printf("\n\n");

}

int chech_win()
{
    if(board[1]==board[2] && board[2]==board[3]){ 
        return 1;
    }
    if(board[1]==board[4] && board[4]==board[7]){
        return 1;
    }
    if(board[1]==board[5] && board[5]==board[9]){
        return 1;
    }
    if(board[2]==board[5] && board[5]==board[8]){
        return 1;
    }
    if(board[3]==board[6] && board[6]==board[9]){
        return 1;
    }
    if(board[4]==board[5] && board[5]==board[6]){
        return 1;
    }
    if(board[7]==board[8] && board[8]==board[9]){
        return 1;
    }
    if(board[3]==board[5] && board[5]==board[7]){
        return 1;
    }
}

  void tic_tac_toe()
  {
     int player=1,input,status=-1; //-1 for no one is winner 

    char player1[20], player2[20];
    
    printf_board();

printf("enter the name of player 1\n");
printf("-->\n\t");
scanf("%s",&player1);
printf("enter the name of player 2\n");
printf("-->\n\t");
scanf("%s",&player2);
printf("\n\t %s mark is 'X' and %s mark is 'O' \n",player1,player2);


    while (status=-1)
    {
        player=(player%2==0) ? 2 : 1;// so that  player 1 and 2 can play together  
        char mark =(player==1) ? 'X' : 'O' ; //FOR GIVING PLAYER 1 X MARK AND O TO SECOND PLAYER
        printf("Enter number for player %d \n --> ",player);
        scanf("%d",&input);
        if(input<1 && input>9)
        {
            printf("invalid input \n");
        }

      board[input]=mark;//this is the board arr. which we have decl. in public section
      printf_board();

      int result =chech_win();
      if(result==1){
         if(player==1){

          printf("\n--->*!*!*!%s is the winner*!*!*!\n\n\n",player1);
          return;
         }
         else {

            printf("\n--->*!*!*!%s is the winner*!*!*!\n\n\n",player2);
            return;
         }
      }
      if(result!=1 && result!=0 && result!=-1){
        status=1;
      }
      else if(result==0){
        printf("it's draw \n");
  
        break;
      }
      //printf("\n------------------------------------------------------\n");
      player++;  
    }
  }

int main()
{
    tic_tac_toe();
    //task for you make a function to check that the number given by the user is in the board or not if the number is in board and user enter the same number printf -> invalid number  
    // hint -> make an other array and store the number;
    // if you complete than tell me in vg_coder (insta)
    return 0;
}