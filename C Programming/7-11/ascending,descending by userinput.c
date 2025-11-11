#include<stdio.h>
#include<conio.h>


int main()
{
    int arr[10],i,j, temp;
    
    printf("\n Enter 10 integers: ");
    for(i=0; i<10 ;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    
    for(i=0; i<9; i++)
    {
        for(j=0; j<9-i; j++)
        { 
            
        if(arr[j]<arr[j+1])
        {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
    
    }
    
    printf("\n descending order: ");
    for(i=0;i<10;i++)
    {
        printf("%d",arr[i]);
        
    }
    
    
    printf("\n ascending order: ");
    for(i=9;i>0;i--)
    {
        printf("%d",arr[i]);
    }
    
    
    
    
    return 0;
}
