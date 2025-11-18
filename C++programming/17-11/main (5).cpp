
#include <iostream>
using namespace std;


int main()
{
   
 int choice;
 
 cout<<"Enter your choice";
 cin>>choice;
 
 switch(choice)
{
    case 1: cout<<"Selected language is english";
    break;
    
    case 2: cout<<"Selected language is hindi";
    break;
    
    case 3: cout<<"Selected language is gujrati";
    break;
    
    case 4: cout<<"Selected language is french";
    break;
}
    return 0;
}