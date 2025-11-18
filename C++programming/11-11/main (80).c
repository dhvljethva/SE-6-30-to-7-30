
#include <stdio.h>
#include<conio.h>
struct address

{
    char city[50];
    int zip;
    
};

struct student 
{
    char nameg[50];
    int age;
    struct address add;
}s1;

void main() 

{
 
 struct student s1={"dhaval jethva",21,{"dubai",25315}};
 
 
  
  
 getch();
}
