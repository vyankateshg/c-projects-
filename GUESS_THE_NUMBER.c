#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

    int  main (){
   //clrscr();
      int number ,guesses,ngusses ;
      srand(time(0));//srand function is used to set the starting value for the series of random number . or an int ;
      number = rand()%50+1;// rand function is used for creating random number 
      //and %100 +1 for geting random number every time 
    //  printf("\t//******number is %d\n ",number );
      ngusses=0;

      // do{
      // printf("\n\t!*!*!enter your gusses !*!*!*!-->||\n");
      // scanf("%d",&guesses);
      // if(number<guesses){
      // printf("\t***please enter lower number !!!!\n");
      // }
      // if(number>guesses){
      // printf("\t!!!please enter big number !!!!****\n");
      // }
      // if(number==guesses){
      // printf("\t!!!****you gussed in %d attempet****!!!\n",ngusses);
      // }
      // ngusses++;
      // }while(number!=guesses);

 for(ngusses=0;ngusses<5;ngusses++){
      printf("\n\t!*!*!enter your gusses between 1 to 100 !*!*!*!-->||\n");
      scanf("%d",&guesses);
      if(number<guesses){
      printf("\t***please enter lower number !!!!\n");
      }
      if(number>guesses){
      printf("\t!!!please enter big number !!!!****\n");
      }
      if(number==guesses){
      printf("\t!!!****you gussed in %d attempet****!!!\n",ngusses);
      }
      // }while(ngusses<5);
      }
return 0;
  //getch();
}
