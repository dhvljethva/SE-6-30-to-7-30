#include<stdio.h>
#include<conio.h>


void main()
{
  
  int r;
  float PI = 3.14;
  
  printf("enter a radius: ");
  scanf("%d",&r);
  
  //area of circle
  float area = PI*r*r;
  printf("\n the area of circle is : %f",area);
  
  //circumference of circle
  float circumference = 2*PI*r;
  printf("the circumference of circle is : %f", circumference);
  
  
  
  getch();
}
