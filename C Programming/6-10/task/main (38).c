
#include <stdio.h>
#include<conio.h>


void main()

{
    
    int num,fact=1,i;
    
    printf("enter number : ");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
        printf("\n your factorial is %d",fact);
        
        
    }

    
    
   
    

    getch();
}
