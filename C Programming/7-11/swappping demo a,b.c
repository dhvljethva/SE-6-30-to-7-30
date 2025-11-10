
#include <stdio.h>

int main()
{
  
  int a,b,c;
  printf("Enter any two number: ");
  scanf("%d %d", &a,&b);
  
  printf("Befor swapping: a = %d, b = %d\n", a,b);
  
  a = a + b;  //step 1 
  b = a - b;  //step 2
  c = a - b;  //step 3 
  
  printf("After swapping: a = %d, b = %d\n",a,b);
  
  
    return 0;
}
