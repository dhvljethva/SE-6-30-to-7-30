
#include <stdio.h>
#include<conio.h>
struct address 
{
    char city[50];
    int zip;
    
};

struct student 
{
    char name[50];
    int age;
    struct address add;
    
}s1;



void main() 

{  
    
    printf("\n enter name: ");
    scanf("%s",&s1.name);
    
    printf("\n enter age: ");
    scanf("%d",&s1.age);
    
    printf("\n enter city: ");
    scanf("%s",&s1.add.city);
    
    printf("\n enter zipcode: ");
    scanf("%d",&s1.add.zip);
    
    
    printf("\n name is %s",s1.name);
    printf("\n age is %d",s1.age);
    printf("\n city is %s",s1.add.city);
    printf("\n zip is %d",s1.add.zip);
    
    
    if(s1.age>18)
    {
        printf("\n eligible for vote");
    }
    else
    {
        printf("\n not eligible for vote");
    }
 
 
 
 getch();
}
