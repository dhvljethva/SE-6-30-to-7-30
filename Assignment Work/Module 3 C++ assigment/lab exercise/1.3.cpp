
#include <iostream> 
using namespace std; 

 //function to calculate area
int calculateArea(int lengh, int width)

    {
        return lengh*width;
    }
       
 
int main()
{   
    int lengh,width;
    
    cout<<"enter lengh: ";
    cin>>lengh;
    
    cout<<"enter width: ";
    cin>>width;
    
    int area =calculateArea(lengh,width); //calling function
    
    cout<<"area of rectangle(POP): "<<area<<endl;
   
    return 0; 
    
}