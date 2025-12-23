#include <iostream>
using namespace std;

int main()
{
   int number = 7;
   int guess;
   
   cout<<"Guess the number between 1 and 10: ";
   
   while(true)
   {
       cin>>guess;
       
       if(guess>number)
       {
           cout<<"Too high! try again: ";
       }
       else if(guess<number)
       {
           cout<<"Too low! try again: ";
       }
       else
       {
           cout<<"correct! you guess the number. ";
           break;
       }
   }

       
   
   
   
   
    return 0;
}