#include<stdio.h>
#include<conio.h>
#include<math.h>

    int main (){
      int year ;
      printf("===!!!LET US CHECK THE @LEAP YEAR!!!=======\n");
      printf("enter the year ==>");
      scanf("%d",&year);
      if(year%400==0){
       printf("!!!the year is leap year!!!! \n");
       }
     else if (year%100==0){
     printf("the year is not leap year :<! \n");
     }
     else if (year%4==0){
      printf("!!the year is leap year!!!! \n");
      }
     else{
	printf("!!!the year is not @leap year!!:< \n");
	}
    return 0;
    }