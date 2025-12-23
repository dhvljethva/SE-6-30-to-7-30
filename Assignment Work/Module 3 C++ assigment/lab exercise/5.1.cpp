#include <iostream>
using namespace std;


int main()
{
   int n;
   int sum = 0;
   
   cout<<"enter a number of element: ";
   cin>>n;
   
   int arr[n];
   
   cout<<"enter "<< n << "integer:"<< endl;
   
  for(int i=0; i<n; i++)
  {
      cin>>arr[i];
      sum+=arr[i];
  }
  
  float average = (float)sum/n;
  
  cout<<"sum = "  <<sum<<endl;
  cout<<"average = "<<average<<endl;

    return 0;
}