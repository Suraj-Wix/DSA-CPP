#include<iostream>
using namespace std;

int main()
{
    string s= "rohit";
    // reverse string

    int start=0, end=s.size()-1;
    while(start<=end)
    {
        swap(s[start],s[end]);
        start++,end--;
    }
    cout<<s;
     // size of string
    int size = 0;
    while(s[size]!='\0')
    {
        size++;
    }
    cout<<endl;
    cout<<size<<" ";

    string s2 = "naman";// palindrome string
    int start2=0, end2=s2.size()-1;
    while (start<=end)
    {
        if(s2[start2]!=s2[end2])
        {
            cout<<"not palindrome";
            return 0;
        }
        start2++,end2--;
    }
    cout<<"It is palindrome string";
}