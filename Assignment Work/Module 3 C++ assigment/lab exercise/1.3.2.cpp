
#include <iostream> 
using namespace std; 

//class for rectangle

class rectangle
{
    public:
    int length;
    int width;
    
    int area() //member function
    {
        return length*width;
    }
};
       
 
int main()
{  
    rectangle r; //creating object
    
    cout<<"enter length: ";
    cin>>r.length;
    
    cout<<"enter width: ";
    cin>>r.width;
    
    cout<<"area of rectangle(OPP): "<<r.area()<<endl;
    
     

    return 0; 
    
}