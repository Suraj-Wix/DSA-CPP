#include<iostream>
using namespace std;


int main()
{

    int L,B,H;
    cin>>L>>B>>H; // take input for the dimensions of the 3D array
    int ***ptr = new int **[L]; // dynamically allocate memory for L pointers to 2D arrays

    // creating a 2d array sotre it's addrees in ptr
    for(int i=0; i<L; i++)
    {
        ptr[i] = new int*[B]; // dynamically allocate memory for B pointers to 1D arrays
        for(int j=0; j<B; j++)
        {
            ptr[i][j] = new int[H]; // dynamically allocate memory for H integers
        }
    }

    // value daalo 3D array mein
    for (int i=0; i<L; i++)
    for(int j=0; j<B; j++)
    for(int k=0; k<H; k++)
    ptr[i][j][k]=i+j+k; // take input for each element of the 3D array


    // print the values stored in the 3D array
    for (int i=0; i<L; i++)
    for(int j=0; j<B; j++)
    for(int k=0; k<H; k++)
    cout<<ptr[i][j][k]<<" "; // prints the value at position (i, j, k) in the 3D array
    // cout<<endl;
}