#include<iostream>

using namespace std;

void printsumdig(int matrix[][3], int row, int col)
{
    int first =0;
    int sec =0;
    // first diagonal sum
    int i=0;
    while (i<row)
    {
        first+=matrix[i][i];
        i++;
    }
    // second diagonal sum
    i =0;
    int j=col-1;
    while(j>=0)
    { 
        sec+=matrix[i][j];
        i++;
        j--;
    }

    cout<<first<<" "<<sec<<" ";// print first and second diagonal sum 

    
    
}

int main()
{
    // print diagonal sum of 2 d array
    int matrix[3][3]={1,2,3,4,5,6,7,8,9};
    printsumdig(matrix,3,3);
}