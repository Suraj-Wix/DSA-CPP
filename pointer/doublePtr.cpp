#include<iostream>
using namespace std;
int main()
{
    int n=10;
    int*p=&n; // single pointer  to an integer variable nint 
    int**p2=&p; // double pointer to a single pointer p
    int***p3=&p2; // triple pointer to a double pointer p2
//    cout<<p<<endl; // prints the address of n
//    cout<<&p<<endl; // prints the address of p
//    cout<<p2<<endl; // prints the address of p
//    cout<<&p2<<endl; // prints the address of p2
//    cout<<p3<<endl; // prints the address of p2

   //value ko modify karna ho ,jo n mein kakhi hai...
//    *p=*p+5; // modifies the value of n by adding 5
//    **p2=**p2+5;// modifies the value of n by adding 5 using double pointer
   ***p3=***p3+10; // modifies the value of n by adding 10 using triple pointer
   cout<<n<<endl; // prints the modified value of n
}