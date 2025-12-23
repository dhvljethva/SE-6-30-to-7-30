#include <iostream>
using namespace std;


class Person
{
    
    protected:
    string name;
    int age;

    public:
    void setPerson(string n, int a) 
    {
        name = n;
        age = a;
    }

    void showPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};


class Student : public Person 
{
    
    private:
    string studentID;

    public:
    void setStudent(string n, int a, string id)
    {
        setPerson(n, a);   
        studentID = id;
    }

    void showStudent() {
        showPerson();      
        cout << "Student ID: " << studentID << endl;
    }
};


class Teacher : public Person 
{
    private:
    string subject;

    public:
    void setTeacher(string n, int a, string sub) 
    {
        setPerson(n, a);   
        subject = sub;
    }

    void showTeacher()
    {
        showPerson();      
        cout << "Subject: " << subject << endl;
    }
};

int main() 
{
    Student s;
    Teacher t;

    s.setStudent("dhvll", 21, "D2343");
    t.setTeacher("Mr.pandya", 40, "philosophy");

    cout << "Student Details:\n";
    s.showStudent();

    cout << "\nTeacher Details:\n";
    t.showTeacher();

    return 0;
}
