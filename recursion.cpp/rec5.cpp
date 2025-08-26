#include<iostream>
using namespace std;


 int pow(int num, int n)
 {
        //base case
        if(n==0)// power of any number with exponet 0 is 1
        return 0; // return 1 if n is 0
        if(n==1)// power of 2 with exponent 1 is 2
        return num;// return num if n is 1
        return num*pow(num,n-1);// multiply num with power of num with exponent (n-1)
 }

int main()
{
    //power of 2 ,n
    int n=10; // Example value for n
    cout<<pow(2,n);
}