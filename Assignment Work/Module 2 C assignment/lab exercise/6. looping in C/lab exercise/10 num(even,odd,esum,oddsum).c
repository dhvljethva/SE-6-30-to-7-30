
#include <stdio.h>
#include<conio.h>

int main()
{  
    
    int num,i;
    int evennum = 0, oddnum = 0;
    int evensum = 0, oddsum = 0;
    
    printf("Enter 10 number: ");
   
    for(i = 1; i<=10; i++)
    {   
        printf(" enter number %d: ",i);
        scanf("%d",&num);
        
        if(num % 2 == 0)
        {
            evennum++;
            evensum = evensum+num;
            
        }
        else{
            oddnum++;
            oddsum = oddsum+num;
        }
    }
    
     printf("\ntotal even number = %d",evennum);
     printf("\ntotal odd number = %d",oddnum);
     printf("\nsum of even number = %d",evensum);
     printf("\nsum of odd number = %d",oddsum);
     
    return 0;
}
