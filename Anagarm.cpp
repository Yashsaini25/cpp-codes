#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1,s2;
    cout<<"Enter 1st string: ";
    getline(cin,s1);
    cout<<"Enter 2nd string: ";
    getline(cin,s2);

    if(s1.length()==s2.length())
    {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());

        if(s1==s2)
        cout<<"The strings are anagram"<<endl;
        
        else cout<<"Strings are not anagram"<<endl;
    }

    else cout<<"Strings are not anagram"<<endl;

    return 0;
}