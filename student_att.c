#include<stdio.h>
#include<conio.h>

    int  main (){
      int marks,attendence,i=1;
      
      // do{
      printf("\nenter your marks :");
      scanf("%d",&marks);
      printf("enter your attendence :");
      scanf("%d",&attendence);
      printf("the passing marks 250 attendence is 75%\n\n\t");
      if(marks>250){
	 if(attendence>=75){
	 printf(" congratulation  you are pass !!!\n\n");
	 }else{
	 printf("your attendence are not 75% \t:(\n\n");
	 }
	 }
	else{
	printf("you are fialed\n\n");
	}
	// i++;
	// }while(i<4);
  return 0;
  
  }