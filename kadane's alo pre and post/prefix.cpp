#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool divide(vector<int>arr)
{
  int maxi=INT_MIN, prefix=0, total_sum=0, n=arr.size();
  //Total Sum

  for(int i=0;i<n;i++)
    total_sum+=arr[i];//sum of all elements


  for(int i=0;i<n;i++)
  {
    prefix+=arr[i];//sum of prefix elements
    int ans=total_sum-prefix;//sum of remaining elements
    if(ans==prefix)
    return 1;//if prefix and remaining are equal, return 1
  }
  return 0;//if no such prefix found, return 0
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
vector<int>v(n);
cout<<"Enter the element in array: ";
for(int i=0;i<n;i++)
cin>>v[i];
cout<<divide(v);
}