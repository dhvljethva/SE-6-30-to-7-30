
#include<stdio.h>
#include<conio.h>

void main()

{
 int num,sum,max=0;
  
 printf("enter num");
 scanf("%d",&num);//1234
 
 while(num>0)
{
     int rem = num%10//4//3//2//1
     
     if(rem>max)
     {
         max = rem;
     }
     
     num=num/10;//123//12//1//0

    
}
    printf("biggest digit is : %d",max);
    

    getch();    
}
