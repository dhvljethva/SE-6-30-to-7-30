
#include <stdio.h>
#include<conio.h>


void main()
{
   
   float costprice,sellingprice,profit,loss;
   
   printf("Enter cost price: ");
   scanf("%f",&costprice);
   
   printf("Enter sellingprice : ");
   scanf("%f",&sellingprice);
   
   if(sellingprice > costprice)
  
   {
       profit = sellingprice - costprice;
       printf("profit = %f",profit);
   }   
   
   else if(costprice>sellingprice)
   {
       loss = costprice - sellingprice;
       printf("loss = %f",loss);
   }
    
    else
    {
        printf(" no profit no loss");
    }
             
       
        getch();
}
