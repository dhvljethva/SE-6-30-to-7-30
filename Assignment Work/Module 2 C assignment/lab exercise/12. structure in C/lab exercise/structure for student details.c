
#include <stdio.h>


struct student
{
    char name[20];
    int roll;
    float marks;
};

int main()
{ 
    struct student s[3];
    int i;
    
    for(i=0; i<3; i++)
    {
        printf("Entera your name: ");
        scanf("%s",s[i].name);
        
        printf("Entera your roll number: ");
        scanf("%s",&s[i].roll);
        
        printf("Entera your marks: ");
        scanf("%s",&s[i].marks);
        
        printf("\n");
    }
    
    printf(" Student Details \n");
    for(i=0; i<3; i++)
    {
        printf("name: %s\n",s[i].name);
        printf("roll: %d\n",s[i].roll);
        printf("marks:%.2f\n\n",s[i].marks);
        
    }
   
  
 
    return 0;
}