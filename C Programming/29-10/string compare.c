
#include <stdio.h>
#include<string.h>

int main()
{
    char pass [50];
    char pass2[50]="tops123";
    
    printf("enter your password");
    scanf("%s",&pass);
    
    do
    {
        printf("enter your password");
        scanf("%s",&pass);
        
        
    }
    
    while(strcmp(pass2,pass)!=0);
    
    printf("congratulation!!");
    
    return 0;
}



