#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void wave(int arr[][4], int row, int col)
{
    for(int j=0;j<col;j++) //for each column
    {
        if(j%2==0)//even column
        {
            for(int i=0;i<row;i++)//for even column
            cout<<arr[i][j]<<" ";//print row wise
        }
        else
        {
            for(int i=row-1;i>=0;i--) //for odd column
            {
                cout<<arr[i][j]<<" ";// print column wise
            }
        }

    }
}

int main()
{
    //create a 2d vector
    int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    // int arr2[3][4]={0,1,3,4,6,7,10,11,41,18,9,11};
    // int ans[3][4];

wave(arr1,3,4);//function call
}