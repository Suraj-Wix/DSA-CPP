#include<iostream>
using namespace std;

// void print(int arr[], int index, int n)
// {
//     if(index == n) // base case: if index reaches the size of the array
//         return; // stop recursion
//     cout<<arr[index]<<" "; // print the current element
//     print(arr, index + 1, n); // recursive call to print the next element
// }

// int main()
// {
//   int arr[]={3,4,1,2,8} ;


//   print(arr, 0, 5);
// }




// print 8 2 1 4 3
// void print(int arr[], int index)
// {
//     if(index == -1)// base case: if index is -1, we have printed all elements
//         return; // stop recursion
//     cout<<arr[index]<<" "; // print the current element
//     print(arr, index - 1); // recursive call to print the previous element
// }

// int main()
// {
//   int arr[]={3,4,1,2,8} ;// Example array


//   print(arr, 4);// start printing from the last index (4 in this case)
// }

//  3 4 1 2 8 print krana ho toh
void print(int arr[], int index)
{
    if(index == -1)// base case: if index is -1, we have printed all elements
        return; // stop recursion

    print(arr, index - 1);// recursive call to print the previous element
    cout<<arr[index]<<" "; // print the current element
  
}

int main()
{
  int arr[]={3,4,1,2,8} ;// Example array


  print(arr, 4);// start printing from the last index (4 in this case)
}