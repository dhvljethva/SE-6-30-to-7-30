
#include <iostream>
using namespace std;


class student 
{
    public:
    int id;
    string name;
    string surname;
    string email;
    string pass;
    
    void display()
    {
        cout<<" "<<name<<" "<<surname<<" "<<pass<<endl;
    }
};


int main() 

  
{     
    student st1;
    student st2;
    
    
    st1.id = 101;
    st1.name = "dhaval";
    st1.surname = "jethva";
    st1.email = "dj@gmail.com";
    st1.pass = "2323";
    
    
    st2.id = 103;
    st2.name = "ayush";
    st2.surname = "hirpara";
    st2.email = "aj@gmail.com";
    st2.pass = "2324";
    
    st1.display();
    st2.display();
 
 
 
 
 
 
 
    return 0;
}