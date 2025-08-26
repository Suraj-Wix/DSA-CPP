#include<iostream>
using namespace std;

int main()
{
  // Array create karna hai, jo store karega address 
  int n,m;// n = rows, m = columns
  cin>>n>>m; // take input for the number of rows and columns

 int **ptr =new int*[n];

 // creating a 2D array dynamically
 for(int i=0; i<n; i++)
 {

    ptr[i] = new int[m]; // dynamically allocate memory for each row of the 2D array
 }
 // value daalo 2D array mein kaise kr sakte hai
 
 for(int i=0;i<n;i++)
 for(int j=0;j<m;j++)
 cin>>ptr[i][j]; // take input for each element of the 2D array
 
 // print the values stored in the 2D array

 for(int i=0;i<n;i++)
 {
    for(int j=0;j<m;j++)
    cout<<ptr[i][j]<<" "; // prints the value at position (i, j) in the 2D array
    cout<<endl;
 }
 

 // release the memory allocated for the 2D array

 for(int i=0;i<n;i++)
 delete[] ptr[i]; // deallocate memory for each row of the 2D array
    delete[] ptr; // deallocate memory for the array of pointers to rows
}