
#include <stdio.h>

int main()
{
   int matrix[3][3];
   int i,j, sum=0;
   
   printf("Enter 9 integers for 3x3 matrix:\n");
   for(i = 0; i < 3; i++ )
   { 
       for(j=0; j< 3; j++)
       {
           scanf("%d",&matrix[i][j]);
       }
       
   }
   printf("\nmatrix elements are:\n");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("%d",matrix[i][j]);
       }
       printf("\n");
   }
     
   printf("\nSum of all elements = %d\n",sum);     
    return 0;
}







