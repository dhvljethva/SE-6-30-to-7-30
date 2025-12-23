#include <iostream>
using namespace std;


int main()
{   
    int a = 10, b = 5;
    
    //Arithmetic operator
    
    cout<<"Arithmetic operator: "<<endl;
    cout<<"a-b = "<<a-b<<endl;
    cout<<"a*b = "<<a*b<<endl;
    cout<<"a/b = "<<a/b<<endl;
    
    //Relational operator
    
    cout<<"\nRelational operator:"<<endl;
    cout<<"a>b = "<<(a>b)<<endl;
    cout<<"a==b = "<<(a==b)<<endl;
    cout<<"a!=b = "<<(a!=b)<<endl;
    
    //Logical operator
    
    cout<<"\nLogical operator:"<<endl;
    cout<<"(a>0 && b>0)= "<<(a>0 && b>0)<<endl;
    cout<<"(a>0 || b<0)= "<<(a>0 || b<0)<<endl;
    cout<<"!(a==b)= "<<(a==b)<<endl;
     
    //Bitwise operator
    
    cout<<"\nBitwise operator: "<<endl;
    cout<<"a & b= "<<(a&b)<<endl;
    cout<<"a | b= "<<(a|b)<<endl;
    cout<<"a ^ b= "<<(a^b)<<endl;
    
    

    


     return 0;
}