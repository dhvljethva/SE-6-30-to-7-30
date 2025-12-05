#include <iostream>
using namespace std;

class Bank
{
    public:
    void bank()
    {
        cout<<"Banking";
    }
};

class current : public Bank 
{
  public:
  void Current()
  {
      cout<<"current";
      
  }
};

class save : public Bank 
{
    public:
    void Save()
    {
        cout<<"saving";
        
    }
};


int main()
{  
    current c;
    save s;
    
    c.Current();
    s.Save();
    c.bank();
   
    return 0;
}