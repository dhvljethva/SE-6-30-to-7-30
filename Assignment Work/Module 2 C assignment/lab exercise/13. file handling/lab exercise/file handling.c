
#include <stdio.h>

int main()
{
  FILE *fp;
  char str[100];
  
  fp = fopen("myfile.txt.","w");
 
  
  printf("Enter a string: ");
  fgets(str,100,stdin);
  
  fprintf(fp, "%s",str);
  fclose(fp);
  
  fp = fopen("myfile.txt","r");
 
  printf("\nFile content: ");
  
  printf("%s",str);
  
  fclose(fp);
  
  
  
    return 0;
}