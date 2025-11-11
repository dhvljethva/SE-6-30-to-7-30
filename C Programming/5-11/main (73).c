
#include <stdio.h>
#include<conio.h>


int main()
{
    int number,i,sum=0;
    float per=0;
    printf("enter size of subject: ");
    scanf("%d",&number);
    
    int marks[number];
    
    for(i=0;i<number;i++)
    {
        printf("enter your marks for subject: %d -> ",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<number;i++)
    {
        printf("\n marks of subject is %d",marks[i]);
    }
    for(i=0;i<number;i++)
    {
        sum+=marks[i];
    }
    printf("\n your total is : %d ",sum);
    per = sum/number;
    printf("\n your percentage is : %f",per);

    return 0;
}