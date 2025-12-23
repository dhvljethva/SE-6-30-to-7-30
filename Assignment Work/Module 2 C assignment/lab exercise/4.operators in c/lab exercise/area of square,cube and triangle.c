#include<stdio.h>
#include<conio.h>


int main()
{
   int a,b,h, area;
   
   // Area of Square
   
   printf("Enter side of square: ");
   scanf("%d",&a);
   
   area = a * a;
   printf("Area of square = %d\n",area);
   
   // Area of cube
   
   printf("Enter side of cube: ");
   scanf("%d",&a);
   
   
   area = 6 * (a*a);
   printf("Area of cube = %d\n",area);
   
   //Area of Triangle
   
   printf("Enter base and height of triangle: ");
   scanf("%d %d",&b,&h);
   
   area = (b*h)/2;
   printf("Area of Triangle = %d\n",area);
   
   
   
    
    return 0;
}
