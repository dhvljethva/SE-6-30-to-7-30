
#include <stdio.h>

int main()
{
    int arr[5];
    int i,j,temp;
    
    printf("Enter 5 number:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    
    }
    
    // sort in Ascending order
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        
    } 
    printf("\nAscending order:\n");
    for(i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }
    
    
    // sort in descending order
    
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    } 
    
    printf("\n\nDescending order:\n");
    for(i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }
    
    
    
    return 0;
}
