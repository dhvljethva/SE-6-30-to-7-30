/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    
    printf("\n Enter Any Number \n Press 1 for english \n press 2 for hind \n press 3 for gujarati");
     scanf("%d",&num);
     
     switch(num)
     { 
         
         case 1:printf("\n your language is english");
         break;
         
         case 2:printf("\n your language is hindi");
         break;
         
         case 3:printf("\n your language is gujarati");
         break;
         
         default:printf("\n your number is not valid");
         
     }
     
     
    getch();

}