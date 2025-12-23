
#include <stdio.h>

void join(char a[],char b[])
{
    int i = 0, j = 0;
    
    while (a[i] != '\0') i++;
    while(b[j] != '\0')
    {
        a[i++] = b[j++];
    }
    a[i] = '\0';
    
}

int main()
{
  
  char s1[100], s2[100];
  
  printf("Enter first string: ");
  scanf("%s",s1);
  
  printf("enter second string: ");
  scanf("%s",s2);
  
  join(s1,s2);
  
  printf("Joined string = %s",s1);
  

  
    return 0;
}