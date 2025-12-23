#include<stdio.h>
#include<conio.h>


int main()
{
    int num;
    char ch;
    
    printf("enter any number(0-9): ");
    scanf("%d",&num);
    
    ch = num + '0';
    
    printf("The ASCII value of %d is %d\n", num,ch);
   
    
    
    return 0;
}
