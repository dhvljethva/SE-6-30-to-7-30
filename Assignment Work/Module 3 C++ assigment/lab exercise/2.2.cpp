#include <iostream>
using namespace std;


int main()
{   
    //Implicit the coversion 
    
    int  a = 10;
    float b = a; //int to float (implicit)
    
    //Explicit the coversion
    
    float x = 5.3;
    int y = (int)x; //float to int(Explicit)
    
    //Output 
    
    cout<<"Implicit conversion (int to float): " << b << endl;
    cout<<"Explicit conversion (int to float): " << y << endl;

    
    

     return 0;
}