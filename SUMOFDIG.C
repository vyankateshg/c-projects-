#include<stdio.h>
#include<conio.h>

  int main (){
      int  num,re,sum=0,n;
      printf("enter the three digit number :");
      scanf("%d",&num);
      n=num;
      while(num>0){
	 re=num%10;
	 sum+=re;
	 num=num/10;
	 }
      printf("the sum of all digits of %d is %d \n",n,sum);
      // getch();
      return 0;
      }