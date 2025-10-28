#include<stdio.h>
#include<conio.h>

void main()

{
    
    int pizza=100,burger=70,coffee=120,total=0;
    int choice,table_no;
    
    printf("Enter your table no:");
    scanf("%d",&table_no);
    
    do
    {
        printf("\n enter 1 for pizza - Rs.100 \n enter 2 for burger \n enter 3 for coffee \n press 0 for exit \n \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : total+=pizza;
            // printf("%d",total);
            break;
            
            case 2 : total+=burger;
            // printf("%d",total);
            break;
            
            case 3 : total+=coffee;
            // printf("%d",total);
            break;
            
            
        }
    }
    
    while(choice!=0);
    
    printf("your total bill is %d",total);
    
    
    
    
    
    
      
    getch();
    
    
}
