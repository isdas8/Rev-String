#include <iostream>

using namespace std;

int main()
{
    string str, rev;
    cout<<"Enter the string:";
    cin>>str;
    // reverse string
    rev =' ';
    for (int i = str.length()-1; i >= 0; i--)
    {
        rev = rev + str[i];
    }
cout<<rev;
return 0;
}