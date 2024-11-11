 #include<stdio.h>
 
 #include<stdlib.h>
#include <time.h>
        int pizza_price =80,burger_price=45,coffe_price=25;
        int piz_total,burger_total,coffe_total;
        int  piz_qty,brg_qty,cofe_qty,total_Bill;
    int opration;
    char hanji;

  
   int total_price(int qty,int price)
   {
    return qty*price;
   }
  char name[20];
  int no[10];
  int table;
      

 int invoice(){
  int dekho;
  printf("enter your name -->");
  scanf("%s",&name);
  printf("enter your phone no here -->");
  scanf("%s",no);
  printf("enter your table no here -->");
  scanf("%d",&table);
  printf("welcome to our cafe %s \nhope you will enjoy it\n ",name);
  printf("guess the number between 1 to 10 \n");
  printf("enter the number -> ");
  scanf("%d",&dekho);
   if( dekho == 10 ){
    printf("*!*!*congratulation you win 100 rs off at your order*!*!*\n ");
    printf("\n|*|*|*your code is --> 1705*|*|*|\n");
   }
   else{
    printf(" you lose :< \n ");
   }
  

  
 }
    

 int billing(){
  int code;
  // char theek;
         piz_total= total_price(piz_qty,pizza_price);
        coffe_total= total_price(cofe_qty,coffe_price);
        burger_total= total_price(brg_qty,burger_price);

            total_Bill=piz_total+coffe_total+burger_total;

          // printf("\t------------------------------------------\n");
    printf("do you have any code ? 'y' or 'n'?");
    scanf("%c",&hanji);
    // check karne ke liye code hai ki nhi :><:
    if(hanji =='y')
    {
      printf("enter the code -->");
      scanf("%d",&code);
      
       if(code == 1705){
      printf("congratulation you have  100rs discount :>"); 
       printf("\t*-*-*-*-AJAY'S GOOD FOOD *-*-*-*-*-\n");
    printf("\t\t!--* BILL *--!\n");
    printf("name\t %s\ttable no.\t %d \n",name,table);
        printf("---------------------------\n");
    printf("\t*!*itmes*!*\t*!*qty*!*\t*!*price*!*\n");
    printf("\tpizza\t\t%d\t\t%d\n",piz_qty,piz_total);
    printf("\tburger\t\t%d\t\t%d\n",brg_qty,burger_total);
    printf("\tcoffe\t\t%d\t\t%d\n",cofe_qty,coffe_total);
    printf("---------------------------\n");
    printf("\tTOTAL =\t%d",total_Bill);
     printf("\tdis =\t-100");
    total_Bill = total_Bill -100;
     printf("\tGRAND -TOTAL =\t%d",total_Bill);
         printf("\n\t---(:--thank-you--:)--");
       }
    }
    else
  {
      printf("invalid code\n");
    printf("\t*-*-*-*-AJAY'S GOOD FOOD *-*-*-*-*-\n");
    printf("\t\t!--* BILL *--!\n");
    printf("name\t %s\ttable no.\t %d \n",name,table);
        printf("---------------------------\n");
    printf("\t*!*itmes*!*\t*!*qty*!*\t*!*price*!*\n");
    printf("\tpizza\t\t%d\t\t%d\n",piz_qty,piz_total);
    printf("\tburger\t\t%d\t\t%d\n",brg_qty,burger_total);
    printf("\tcoffe\t\t%d\t\t%d\n",cofe_qty,coffe_total);
    printf("---------------------------\n");
    printf("\tTOTAL =\t%d",total_Bill);
    printf("\n\t---(:--thank-you--:)--");
 }
 }
    int main()
{
     invoice();
     billing();
    return 0;
}    