#include<iostream>
using namespace std;

int sum(int arr[] , int index) 
{
    return arr[index];
}

int main()
{
    int arr[]={3,4,1,2,8} ;// Example array
    int total = 0;
    for(int i = 0; i < 5; i++) 
        total += sum(arr, i);
        cout<<total;
    
}