
#include <stdio.h>

int main()
{  
  int num=10;  // Variable
  int *ptr;    //Pointer variable 
  
  ptr =&num;   // pointer stores address of num 
  
  printf("Before modificaion:\n");
  printf("Value of num=%d\n",num);
  
  // modify value using pointer 
  *ptr=20;
  
  printf("\nAfter modification using pointer:\n");
  printf("Value of num=%d\n",num);
  
      
    
    return 0;
}
