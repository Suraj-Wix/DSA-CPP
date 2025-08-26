#include<iostream>
using namespace std;

int fact(int n)
{
    //base case
    if(n==1||n==0)// factorial of 0 is 1
    return 1; // factorial of 1 is 1
    // recursive case
    return n*fact(n-1); // multiply n with factorial of (n-1)
}

int main()
{
    // factorial of a number n
    int n;
    n=5; // Example value for n
    cout<<fact(n);
}