/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<conio.h>
void main()
   
{
    
    char c;
    
    printf("Enter any alphabet");
    scanf("%c",&c);//
    
    //printf("Your character is %c",c);
    
    if(c=='a' || c=='e'  || c=='i' || c=='o' || c=='u')
    {
        
        printf("It's a vowel");
        
    }
    
    else
    { 
        
        printf("its' a consonant");
        
    }
    
    getch();


}