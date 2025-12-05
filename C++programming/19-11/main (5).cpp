#include <iostream>
using namespace std;

class student 
{
    //parameterized constructor
    public:
    //global variable
    int id=0;//1 
    string name="tops";//a
    
    student(int id,string name)
    {
        //local variable
        
        this->id = id;
        this->name = name;
    }
    void display()
    {
        cout<<id<<" "<<name<<""<<endl;
    }
    
};
int main()
{

    student s1 = student(12,"d");
  student s2 = student(11,"j");
    
  s1.display();
  s2.display();
 
 


    return 0;
}