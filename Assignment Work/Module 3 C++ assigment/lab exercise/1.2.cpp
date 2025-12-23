
#include <iostream> 
using namespace std; 


int main()
{
       string name;  //variable to store user name
       int age;      //variable to store user age
       
       //asking for user inpur
       
       cout<<"enter your name: ";
       cin>>name;  //taking name as input
       
       cout<<"enter your age: ";
       cin>>age;  //taking age as input
       
         //displaying personalized greeting
       
       cout<<"your name is: "<<name<<"your age is: "<<age<<endl;
       
    return 0; //end of the program
}