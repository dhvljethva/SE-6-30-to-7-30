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
    
    int age;
    
    printf("Enter your age");
    scanf("%d",&age);
    
    if(age>18)
    { 

        printf("\n Eligible to vote");
        //nested if 
        if(age>=60)
        {  
            printf("\n senior Citizen");
            
        }
    
    else 
    {
        
        printf("\n Young Age");
        
    }
    
    }
    else 
    { 
        printf("\n not eligible to vote");
        
        
    }   
    getch();


}