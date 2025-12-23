
#include <stdio.h>


int main()
{
   char str[100];
   int i = 0, j = 0, flag = 1;
   
   printf("Enter a string: ");
   scanf("%s",str);
   
   while(str[j] != '\0')
   {
       j++;
   }
   j--;
   
   while(i<j)
   {
       if(str[i] != str[j])
       {
           flag = 0;
           break;
       }
       i++;
       j--;
   }
   if(flag == 1)
   printf("it is a palindrome");
   else
   printf("it is not palindrome");
   
    return 0;
}