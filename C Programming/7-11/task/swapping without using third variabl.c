
#include <stdio.h>

int main()
{
  
  int a=10,b=20;
  
  printf("\n Before swapping: a=%d,b=%d",a,b);
  
  a=a+b; // a = 10+20 = 30
  b=a-b; // b = 30-20 = 10
  a=a-b; // a = 30-10 = 20
  
  printf("\n After swapping: a=%d, b=%d",a,b);
  
    return 0;
}
