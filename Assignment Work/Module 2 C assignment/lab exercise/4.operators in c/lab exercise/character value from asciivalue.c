#include<stdio.h>
#include<conio.h>


int main()
{
    
    int asciivalue;
    char character;
    
    printf("Enter ASCII value: ");
    scanf("%d",&asciivalue);
    
    character = (char)asciivalue;
    
    printf("Character for ASCII value %d is: %c\n",asciivalue,character);
    
    
    
    return 0;
}
