#include<stdio.h>
#include<stdlib.h>

  int main () {
    int second,minute,hour;
    hour=minute=second=0;
for (int  i = 0; i < 120; i++)
{
    second=i;
    system("clear");
    printf(" %02d : %02d : %02d\n",hour,minute,second);
    //clrscr();
    if(second==60)
    {
        minute+=1;
        second=00;
    }
    
    // system("cls"); -> for clearing screen
    if (minute==1)
    {
       printf("*****************time out 1 minute has been completed******************\n");
       break;
    }
    
    sleep(1);
    
    
  }

    return 0;
  }