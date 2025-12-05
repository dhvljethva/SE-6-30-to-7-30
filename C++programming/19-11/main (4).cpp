#include <iostream>
using namespace std;

class student 
{
    //parameterised constructor 
    public:
    
    int id;
    string name,surname,email,password;
    
    student(int i,string n,string s,string e, string p)
    {
        id = i;
        name = n;
        surname = s;
        email = e;
        password = p;
        
    }
    
    void display()
    {
        cout<<" "<<name<<" "<<surname<<" "<<email<<" "<<password<<" "<<endl;
    }
    
};



int main()
{

 student s1 = student(100,"dhvl","jethva","jd12@gmail.com","3839");
 student s2 = student(100,"dhvl","jethva","jd12@gmail.com","3839");
 student s3 = student(100,"dhvl","jethva","jd12@gmail.com","3839");
 student s4 = student(100,"dhvl","jethva","jd12@gmail.com","3839");
 student s5 = student(100,"dhvl","jethva","jd12@gmail.com","3839");


 s1.display();
 s2.display();
 s3.display();
 s4.display();
 s5.display();

 


    return 0;
}