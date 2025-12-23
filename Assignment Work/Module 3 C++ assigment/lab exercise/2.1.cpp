#include <iostream>
using namespace std;


int main()
{   
    //variable of differet data type 
    
    int a = 20;
    float b = 2.2;
    double c = 20.22;
    char grade = 'D';
    
    
    //constant 
    const int  MAX = 100;
    
    //operations
    int sum = a + MAX;
    float product = a*b;
    double average = (a+c)/2;
    
    //output 
    cout<<"integer value: "<< a << endl;
    cout<<"float value: "<< a << endl;
    cout<<"double value: "<< a << endl;
    cout<<"character value: "<< a << endl;
    cout<<"constant value: "<< a << endl;
    
    cout<<"sum (a+MAX): "<< sum << endl;
    cout<<"product(a*b): "<< product << endl;
    cout<<"average(a+c): "<< average << endl;


     return 0;
}