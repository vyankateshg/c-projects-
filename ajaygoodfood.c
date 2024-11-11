#include<stdio.h>
//declaretion of gobal variable 

        int pizza_price =80,burger_price=45,coffe_price=25;
       int piz_total,burger_total,coffe_total;// qty*prrice of all 
        int  piz_qty,brg_qty,cofe_qty,total_Bill;

    int opration;

    char hanji;//

  
   int total_price(int qty,int price)
   {
    return qty*price;
   }
   //
  char name[20];
  int no[10];
  int table;
      

 int invoice()
 {

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
  scanf("%d",&dekho);// to 
   if( dekho == 10 ){
    printf("*!*!*congratulation you win 100 rs off at your order*!*!*\n ");
    printf("\n|*|*|*your code is --> 1705*|*|*|\n");
   }
   else{
    printf(" you lose :< \n ");
   }
   
 }
    int MENU()
    {
        printf("\t*-*-*-*-AJAY'S GOOD FOOD *-*-*-*-*-\n");
        printf("--------**MENU**--------\n");
        printf("\titmes\tprice\n");
        printf("\tpizza\t(80)\n\tburger\t(45)\n\tcoffe\t(25)\t\n");
        printf("-------------------------------------------");
    }

    int order()
    {
       printf("\n-------------------------------------------");
       printf("\nenter the quantity of burgers :");
       scanf("%d",&brg_qty);
       printf("\nenter the quantity of pizza :");
       scanf("%d",&piz_qty);
       printf("\nenter the quantity of coffe :");
       scanf("%d",&cofe_qty);

        
    }

 int billing(){
  int code;

         piz_total= total_price(piz_qty,pizza_price);
        coffe_total= total_price(cofe_qty,coffe_price);
        burger_total= total_price(brg_qty,burger_price);

            total_Bill=piz_total+coffe_total+burger_total;

          // printf("\t------------------------------------------\n");
    printf("do you have any code ? 'y' or 'n'?");
    scanf("%s",&hanji);
    // to check whether the code is 1705 or not 
    if(hanji=='y')
    {
      printf("enter the code -->");
      scanf("%d",&code);
      
       if(code == 1705){
      printf("congratulation you have  100rs discount :>\n"); 
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
     printf("\n\tdis =\t-100");
    total_Bill = total_Bill - 100;
     printf("\n\tGRAND -TOTAL =\t%d",total_Bill);
         printf("\n\t---(:--thank-you--:)--");
       }
       else{
       printf("invalid code\n"); 
       }
   }
    else// hanji wala else
  {
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
   home:
        printf("\t*-*-*-*-AJAY'S GOOD FOOD *-*-*-*-*-\n");
        printf("enter your option -->\n");
        printf("1 MENU \n");
        printf("2 invoice , play and win \n");
        printf("3 ORDER \n");        
        printf("4 BILLING  \n");
        printf("5 exit \n");
        printf("-->");
        scanf("%d",&opration);
        
       switch (opration)
     {   
       case 1:
                MENU(); 
               printf("\ndo you want to order any food ?????:{)'y' or 'no' ? ");
               scanf("%s",&hanji);
               if(hanji=='y'||'Y'){
                 goto home;
               }   
       case 2:
                 invoice();
               printf("\n do you want to go at navigation'y' or 'no' ? ");
               scanf("%s",&hanji);
               if(hanji=='y'||'Y'){
                 goto home;
               }   
       case 3:
               order();  
                printf("\n do you want to at navigation'y' or 'no' ? ");
               scanf("%s",&hanji);
               if(hanji=='y'||'Y'){
                 goto home;
               }      
       case 4:
              billing();     
               printf("\ndo you want to order any food ?????:{)'y' or 'no' ? ");
               scanf("%s",&hanji);
               if(hanji=='y'||'Y'){
                 goto home;
               }   
      case 5:
                break;
     default:
            printf("invalid option \n");   
     }
    return 0;

 }
    