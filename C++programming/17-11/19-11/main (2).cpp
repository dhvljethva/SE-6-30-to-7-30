
#include <iostream>
using namespace std;

class Student
{  
    //parameterized constuctor
    public:
    
    int id;
    string name,surname,email,password;
    
    Student(int i,string n,string s,string e,string p)
    {
        id = i;
        name = n;
        surname = s;
        email = e;
        password = p; 
    }
      
      void display()
      {
          cout<<id<<" "<<name<<" "<<surname<<" "<<email<<" "<<password<<" "<<endl;
      }
     
};
int main()
{
    
  Student s1 = Student(101,"a","b","a@gmail.com","3839");
  Student s2 = Student(102,"r","j","w@gmail.com","3839");
  Student s3 = Student(120,"i","u","s@gmail.com","3839");
  Student s4 = Student(210,"o","e","l@gmail.com","3839");
  Student s5 = Student(333,"s","w","t@gmail.com","3839");
    
    
   s1.display();
   s2.display();
   s4.display();
   s4.display();
   s5.display();
    
    
    
    
    return 0;
}