#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
 //create a 2d vector
  int n,m;
    cout<<"Enter the number of rows and columns of the matrix: ";
    cin>>n>>m;
//  vector<vector<int>> matrix(3,vector<int>(4,1)); 
vector<vector<int>> matrix(n,vector<int>(m,1)); // 2d vector with n rows and m columns and all elements initialized to 1

//  for(int i=0;i<3;i++)
//  for(int j=0;j<4;j++)
//  cout<<matrix[i][j]<<" "; //print 2d vector

// cout<<"Rows = "<<matrix.size();
// cout<<endl;
// cout<<"columns = "<<matrix[0].size(); //print number of rows and columns
  
  for(int i=0;i<n;i++)
  for(int j=0;j<m;j++)
  cin>>matrix[i][j]; //input 2d vector

  for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cout<<matrix[i][j]<<" "; //print 2d vector
        cout<<endl;
    }
}