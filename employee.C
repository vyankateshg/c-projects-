#include<stdio.h>
#include<conio.h>
#include<string.h>

  struct employee{
       int code;
       float salary;
       char name[20];
  };
  union employ
  {
    int roll;
    char name[20];
    float grade;
  };
  // {
  //   /* data */
  // };
  
    int  main (){
   
     struct employee e1,e2;
    char name2[20];
   
   printf("-----------ENTER FOR EMPLOYEE NO. 1---------------\n");

  printf("enter employee name -->");
  gets(e1.name);
 printf("\n enter the code -->");
 scanf("%d",&e1.code);
 printf("\n enter the salary-->");
 scanf("%f",&e1.salary);

 printf("-----------ENTER FOR EMPLOYEE NO. 2---------------\n");
 printf("\nenter employee name -->");
 gets(e2.name);
 scanf("%s",&name2);
  strcpy(e2.name,name2);//gets is not wirking here so we use strcpy:< :( 
// gets(e2.name);
 printf("\n enter the code -->");
 scanf("%d",&e2.code);
 printf("\n enter the salary-->");
 scanf("%f",&e2.salary);
printf("\n----------EMPLOYEE 1--------------\n");
	
	printf("!**THE SALARY OF EMPLOYEE 1--> %f\n",e1.salary);
	printf("!--*--THE NAME OF EMPLOYEE 1 IS -->%s\n",e1.name);
	printf("!--*--THE CODE OF EMPLOYEE 1 IS-->%d\n",e1.code);

  printf("----------EMPLOYEE 2--------------\n");
	printf("!**THE SALARY OF EMPLOYEE 2--> %f\n",e2.salary);
	printf("!--*--THE NAME OF EMPLOYEE 2 IS -->%s\n",e2.name);
	printf("!--*--THE CODE OF EMPLOYEE 2 IS-->%d\n",e2.code);
  printf("\n----------THE-END--------------\n");
  
 //printf("\n %d",sizeof(struct employee));
  // printf("\n %d",sizeof(union employ ));

 return 0;
  }