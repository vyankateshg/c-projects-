#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

int snakewatergun(char you, char comp){
   /* //return 1 if you win ,-1 if you lose and 0 if draw
    if(you == comp){
        return 0;
        //draw
        // gg,
        // ss,
        // ww,
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
        //draw
        // gg,
        // ss,
        // ww,
    }
}

    int  main (){
 char comp,you;
 int number,i=0;
 do  {   
  srand(time(0));
  number = rand()%100+1;

  if(number<33){
    comp ='s';
  }
  else if(number>33 && number<66){
    comp= 'w';
  }
  else{
    comp = 'g';
      }
  
 printf("\t!!!--GAME2.O-->SNAKE_WATER_GUN--!!!\n");
 //printf("let's do best of 3 \n");
 printf("\n**** %d attempt*****\n",i+1);
    printf("\n\tEnter 's' for snake, 'w' for water and 'g' for gun-+-->");
    scanf("%s",&you);
    int result = snakewatergun(you,comp);
  //  printf("%d",snakewatergun(you,comp));
  printf("!!!!! LET'S DO BEST OF @4\n");
      printf("\t\n*-*-*-YOU CHOSE %c AND COMPUTER CHOSE %c*-*-*-*-*\n",you,comp);
    
    if(result==0){
        printf("\n\t**!!!!!** it's a draw buddy**!!!!!**\n");
    }
    else if (result==1)
    {
        printf("\n\t*-*-*-congratulation you win*-*-*\n");
    }
    else{
        printf("\n\t:(!!! YOU LOSE !!!:( but computer wins\n");
    }
    //printf("\n/*/*/YOU CHOSE %c AND COMPUTER CHOSE %c/*/*/*/",you,comp);
i++;
 } while(i<4);
  
    


 return 0;
}
