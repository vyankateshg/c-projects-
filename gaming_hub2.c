#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#include <time.h>
//time for rand and srand function 
//jai Shree Ram

char board[]={'0','1','2','3','4','5','6','7','8','9'};

 int guss_the_number(int number,int guesses,int ngusses)
        {
          printf("\t------GUESS THE NUMBER--------\n");
          if(number<50)
          {
            printf("\nHINT -->(hint)the number is under 50<--\n");
          }
          else{
            printf("\nHINT --->(hint)the number is greater then 50<--\n");
          }
          printf("you are having only five(5) attempts\n");
            for(ngusses=1;ngusses<6;ngusses++){ 
          printf("-->Attempt number %d\n",ngusses);
      printf("\n\t!*!*!enter your guess between 1 to 100 !*!*!*!-->||\n");
      scanf("%d",&guesses);
      if(number<guesses){
      printf("\t***please enter smaller number !!!!\n");
      }
      if(number>guesses){
      printf("\t!!!please enter bigger number !!!!****\n");
      }
      if(number==guesses){
      printf("\t!!!****congratulation you guessed in %d attempt****!!!\n",ngusses);
      break;
      } 
     } 

     printf("\n--->the number was %d<---\n",number);
     printf("\n-----------------------------------------------------\n");
        }

        int snakewatergun(char you, char comp){
   /* //return 1 if you win ,-1 if you lose and 0 if draw
    if(you == comp){
        return 0;
    //draw // gg,// ss, // ww,
    }
   /*not draw 
    case 
     sw,sg, gw,*/
    if(you=='s'&&comp=='w'){
        return 1;
    }
  if(you=='w'&&comp=='s'){
        return -1;
    }
    if(you=='s'&&comp=='g'){
        return -1;
    }
 if(you=='g'&&comp=='s'){
        return 1;
    }
  
    if(you=='g'&&comp=='w'){
        return -1;
    }
 
     if(you=='w'&&comp=='g'){
        return 1;
    }
     //return 1 if you win ,-1 if you lose and 0 if draw
    if(you == comp){
        return 0;
        //draw // gg,// ss,// ww,
    }
}
    
    int snake_water_gun (int number,char you,char comp)
             {
                int i=0;
             printf("\t!!!--GAME2.O-->SNAKE_WATER_GUN--!!!\n");   
               printf("!!!!! LET'S DO BEST OF @3\n");
                
 do  {   
  if(number<33){
    comp ='s';
  }
  else if(number>33 && number<66){
    comp= 'w';
  }
  else{
    comp = 'g';
      }
  
 printf("\n**** %d attempt*****\n",i+1);
    printf("\n\tEnter 's' for snake, 'w' for water and 'g' for gun-+-->");
    scanf("%s",&you);
    int result = snakewatergun(you,comp);
 
 
      printf("\t\n*-*-*-YOU CHOSE %c AND COMPUTER CHOSE %c*-*-*-*-*\n",you,comp);
    
    if(result==0){
        printf("\n\t**!!!!!** it's a draw buddy**!!!!!**\n");
    }
    else if (result==1)
    {
        printf("\n\t*-*-*-congratulation you win*-*-*\n");
    }
    else{
        printf("\n\t!!! YOU LOSE !!!\n");
    }
  printf("\n----------------------------------------------------\n");
i++;
 } while(i<3);
  
             }
       

void printf_board () { 
    system ("cls");
    printf("====*!*!* TIC TAC TOE *!*!*====\n");
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
    printf("\n--->Please Enter only those number which are displayed in the board<---    \n");
    printf("\n-------------------------------------------------\n");

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

    int count =0;
    for(int i = 1; i<=9;i++)//we are using loop for cheking whether all the box are fill or not 
    {
        if(board[i] == 'X' ||board[i] == 'O'){
            count++;

        }

    }
    //if all the box are filled 
if(count==9){
    return 0;
}
    return -1;

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


         int  main (){
   
      int number,guesses,ngusses ;
      srand(time(0));//srand function is used to set the starting value for the series of random number . or an int ;
      number = rand()%100+1;// rand function is used for creating random number 
      //and %100 +1 for geting random number every time //  printf("\t//******number is %d\n ",number );
      int opration;
    char you,comp,run;
    int i=0;
      ngusses=0;
    
        again:
      printf("\n\t------Welcome to coding gaming hub--------\n");
      printf("*!*!*!*!which game you want to play*!*!*!*!\n\n");
      printf("\t1 GUESS_THE_NUMBER\n");
      printf("\t2 SNAKE_WATER_GUN\n");
      printf("\t3 TIC_TAC_TOE ( X O )\n");
      printf("\t4 exit!\n");
      printf("-->");
      scanf("%d",&opration);
         printf("\n--------------------------------------------------------\n");
      switch (opration)
      {
        case 1:
           do{  

          guss_the_number( number, guesses , ngusses);
          printf("do you want to play other game ? y or n---> ");
          scanf("%s",&run);
          if(run =='y')
          {
            goto again;
          }

              } while (run =='y');
          
              break;
              
         case 2:   
          do{ 
          snake_water_gun ( number, you, comp);
             printf("do you want to play other game ? y or n ---> ");
          scanf("%s",&run);
          if(run =='y')
          {
            goto again;
          }

              } while (run =='y');
             break;
         case 3:
              do {
               tic_tac_toe();
               printf("do you want to play other game ? y or n ---> ");
          scanf("%s",&run);
          if(run =='y')
          {
            goto again;
          }

              } while (run =='y');

             break;  
        case 4:
                break;
        default :
            printf("invalid option \n");   
      }
      
        
return 0;
}
