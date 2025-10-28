#include<stdio.h>
#include<conio.h>

void main()

{
    int pizza=100,burger=70,coffee=120,total=0;
    int choice;
    
    do
    {
        printf("\n enter 1 for pizza - Rs.100 \n enter 2 burger \n enter 3 for coffee \n press 0 for exit \n \n");
        scanf("%d",&choice);
        switch(choice)
        
        {
            case 1 :total+pizza;
            //print("%d",total);
            break;
            
            case 2 : total+burger;
            //printf("%d",total);
            break;
            
            case 3 : total+coffee;
            //printf("%d",total);
        }
        
    }
    
    while(choice!=0);
    
    printf("your total billis %d",total);
    
    getch();
    
    
}
