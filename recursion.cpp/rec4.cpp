#include<iostream>
using namespace std;


int Sum (int n)
{
    // base case
    if(n==1)// sum of first natural number is 1
    return 1;// return 1 if n is 1
    // recursive case
    
    return n+Sum(n-1);// add n to the sum of (n-1)
}

int main()
{
    //sum of first n natural numbers

    int n;
    n =6; // Exaple value for n
    cout<<Sum(n)<<endl;

}