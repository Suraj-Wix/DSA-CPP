#include<iostream>
using namespace std;

int main()
{
   // variables ke ly heap memory allocate karan 
    int*ptr=new int; // dynamically allocate memory for a single integer
    *ptr=5;
    cout<<*ptr<<endl; // prints the value stored in the allocated memory

    float*ptr2=new float; // dynamically allocate memory for a single float
    *ptr2=3.6;
    cout<<*ptr2<<endl; // prints the value stored in the allocated memory

    int n;
    cout<<"Enter the size of array: ";
    cin>>n; // take input for the size of the array

    int*p = new int[n]; // dynamically allocate memory for an array of integers of size n

    //value daalo array mein khud se
    for(int i=0; i<n; i++)
    {
        p[i] = i + 1; // assigning values to the array elements
    }
    // print the values stored in the array
    for(int i=0; i<n; i++)
    cout<<p[i]<<endl;// prints the values stored in the array
   // delete keyword use kar ke memory free karna
    delete ptr; // deallocate memory for the single integer
    delete ptr2; // deallocate memory for the single float
    delete[]p; // deallocate memory for the array of integers
}