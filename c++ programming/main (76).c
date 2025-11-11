
#include <stdio.h>
#include<conio.h>
 
 
 
struct adress 
{
    char city[50];
    int zip;
    
};

struct student 
{
    int id;
    char name[10];
    struct adress add;
    
    
}s1;


void main()
{ 
 
       printf("enter id");
       scanf("%d",&s1.id);
       
       printf("enter name");
       scanf("%s",&s1.name);
       
       printf("enter city");
       scanf("%s",&s1.add.city);
       
       printf("enter zip");
       scanf("%d",&s1.add.zip);
      
      
      printf("\n your id is %d, your name is %s, your city is %s, your zip code is %d",s1.id,s1.name,s1.add.city,s1.add.zip);
      
 
       
 
 
 
 
     getch();
}
