#include<iostream>
using namespace std;

int sqSum(int n)
{
    // base case
    if(n==1)//sum of squares of first natural number is 1
     return 1; // return 1 if n is 1
    // recursive case
    return n*n + sqSum(n-1); // add square of n to the sum of squares of (n-1)
}

int main()
{
    // sum of  squares of N natural numbers
    int n;
    n = 5; // Example value for n
    cout<<sqSum(n)<<endl;
}