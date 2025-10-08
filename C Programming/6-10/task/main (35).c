#include<stdio.h>
#include<conio.h>

void main()

{ 
  
  
      int randomnumber = 69;
      int guess;
      int attempts = 0;
      int maxAttempts = 5;
      
      printf("\n Guess the number between 1 and 100");
      printf("\n\n you have %d tries.",maxAttempts);
      
      while(attempts<maxAttempts)
      {  
            printf("Enter your number:");
            scanf("%d",guess);
            attempts++;
            
      }     
       
       if(guess<randomnumber)
       
       {
           printf("\n\nTry with higher number");
           
       }   
        
        else if ("\n\nguess>randomNumbr");
        {
            
            printf("congratulation! you guessed it right in %d tries.\n",attempts);
            
            return 0;
        }
        
        printf("Game over! you'have used all %d tries.\n",maxAttempts);
        printf("The correct number was %d.\n",randomNumber);
        
        return 0;

   
     
   
     getch();
}