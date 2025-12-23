
#include<stdio.h>
#include<conio.h>


int main()
{
    int num,originalnum,remainder,result=0;
    int i;
    
    printf("Enter a 3-digit number: ");
    scanf("%d",&num);
    
    originalnum=num;
    
    for(i = num; i != 0; i /=10)
    {
        remainder = i%10;
        result += remainder*remainder*remainder; //cube of digit
    }
    
    if(result == num)
    printf("%d is an Armstrong number.",num);
    
    else
    printf("%d is not an Armstrong number,",num);
    
    return 0;
}
