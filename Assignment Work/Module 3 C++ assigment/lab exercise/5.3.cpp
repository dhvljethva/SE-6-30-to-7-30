#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string str;
    bool isPalindrome = true;

    
    cout << "Enter a string: ";
    cin >> str;   
    int length = str.length();

    for (int i = 0; i < length / 2; i++) 
    {
        if (str[i] != str[length - i - 1]) 
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
    {
        cout << "The string is a palindrome.";
    } 
    else
    {
        cout << "The string is NOT a palindrome.";
    }

    return 0;
}
