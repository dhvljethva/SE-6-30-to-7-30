
#include <stdio.h>
#include<conio.h>

int main()
{  
  int num,i=1,sum=0;
  
  printf("Enter number:");
  scanf("%d",&num);
  
  while(i<=num)
  {
      sum = sum+i;
      i++;
      
  }
  
     printf("sum of natural number :  %d",sum);
    return 0;
}
