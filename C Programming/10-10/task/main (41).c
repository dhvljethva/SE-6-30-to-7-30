#include <stdio.h>
#include<conio.h>

void main()
{
    
    int num,max=0
    
    printf("enter any number : ");
    scanf("%d",&num);
    
    while(num>0)
    
    {
        int rem = num%10;
        
        if(rem>max)
        
        {
            
            max+=rem;
        }
    }
    
    num = num/10;
    
    printf("your max number is : %d",max);
    
    getch();
}
