#include<iostream>
using namespace std;

// int minelement(int arr[], int index) 
// {
//     return arr[index];
    
// }


// int main()

// {
// int arr[]={3,4,1,2,8} ;// Example array
// int num= arr[0];
// for(int i = 0; i < 5; i++) 
// {
//     num = min(num, minelement(arr, i));
// }
// cout<<num; // Output the minimum element
// }




int minelement(int arr[], int index, int n) 
{
    if(index == n-1)
    return arr[index];
    return min(arr[index], minelement(arr, index + 1, n));
    
}


int main()

{
int arr[]={3,4,1,2,8} ;// Example array

    cout<<minelement(arr, 0, 5); // Output the minimum element
}
