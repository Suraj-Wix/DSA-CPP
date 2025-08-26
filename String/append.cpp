#include<iostream>
using namespace std;

int main()
{
    string s1 = "rohit",s2 = "mohit";
//     string s3=s1+s2; // string concatenation
//     cout<<s3; // rohitmohit

// 
    //   string s3=s1.append(s2);
    //   cout<<s3; // rohitmohit

    //man lo  kishi ko last me p add kr na hai
    // s1.push_back('p');
    // s1.pop_back(); // last wala element hota hai usko hata do 
    // cout<<s1; 


    // attach kr ne ka ak aur tarika hai

    // s1=s1+'p'; // last me p add krne ka tarika hai 'pa' ko attach nhi kra sakta hu but 'pa' ak string hai char nhi "pa" "" invorted commas me likhna padega
    s1=s1+"pa"; // last me pa attach krne ka tarika hai
    cout<<s1; // rohitp 
}