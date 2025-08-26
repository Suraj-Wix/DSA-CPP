#include<iostream>
using namespace std;

//  void fun(int *p1) // function that takes a single pointer as an argument
void fun(int **p1) // function that takes a single pointer as an argument
    {
        // *p = *p + 10; // modifies the value pointed to by p

        // p1++; // incrementing the pointer p, not the value it points to value is not modified
        *p1 = *p1 + 10; // modifies the value pointed to by p1
    }




int main()
{
   

    int n = 10;
    int *p=&n; // single pointer to an integer variable n
    int **p2=&p; // double pointer to a single pointer p
    cout<<p<<endl; // prints the address of n
    // fun(p); // passing single pointer to a function
    fun(p2);// passing double pointer to a function
    // cout<<n<<" ";// prints the modified value of n after function call

    cout<<p<<endl; // prints the address of n
}