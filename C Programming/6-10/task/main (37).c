
#include <stdio.h>
#include<conio.h>


void main()

{
    int luckynumber = 18,max=5,randomnum,i;
    
    printf("enter your number");

    for(i=1;i<=max;i++)
    
    { 
       printf("\n try %d : ",i);
       scanf("%d",&randomnum);
       
     if (randomnum==luckynumber)
     {
         printf("congratulation you guess the number");
         
         break;
     }
           
    else if(randomnum<luckynumber){
        printf("Try with higher number");
        
    }        
    else{
         printf("Try with lower number");
    }
     if(i==max)
    {
        printf("\n Game over");
    }
    
    }
    
   
    

    getch();
}
