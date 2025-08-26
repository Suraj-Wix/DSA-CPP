#include<iostream> // include iostream library

using namespace std; // use standard namespace



void printrowmax(int arr[][4], int row, int col) //function to print row with max sum
{
    int index =-1, sum = INT_MIN; //sum is minium integer value
    for(int i=0;i<row;i++)// row wise
    {
        int total =0; // total is 0
        for(int j=0;j<col;j++)// column wise
        total+=arr[i][j]; // sum of row wise
        if(total>sum)   // if total is greater than sum
        {
            sum=total; // sum is equal to total
            index=i;  // index is equal to i
        }
    
        
    }
    cout<<index<<" "; // print index of row with max sum
}
int main() // main function
{
     // create 2 d araay
     int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12}; // 2d array
      printrowmax(arr1,3,4); // prin row withe max sum
}