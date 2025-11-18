
#include <iostream>
using namespace std;


class student
{
    public:
    int id;
    string name;
};

int main()
{  
    student st1;
    student st2;
    
   st1.id = 404;
   st1.name = "dj";
   
   st2.id = 102;
   st2.name = "jay";
   
   cout<<st1.id<<endl;
   cout<<st1.name<<endl;
   cout<<st2.id<<endl;
   cout<<st2.name<<endl;

 
    return 0;
}