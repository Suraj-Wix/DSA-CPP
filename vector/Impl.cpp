#include<iostream>
#include<vector>
#include <algorithm>  // 🔧 Required for sort()
using namespace std;
int main()
{
//  // create a vector, declare
//  vector<int>v;
//  // intialize vector
//  vector<int>v1(5,1);
//  // size and capacity 
//  cout<<"size of v: "<<v.size()<<endl;
//  cout<<"capacity of v:"<<v.capacity()<<endl;
//  v.push_back(2);
//  v.push_back(3);
//  v.push_back(10);
//  cout<<"size of v: "<<v.size()<<endl;
//  cout<<"capacity of v:"<<v.capacity()<<endl;
// //Update value 3 ko 5 me change kre
// v[1]=5;
// // initalize vector with 5 elements and all elements are 1
// cout<<"size of v1: "<<v1.size()<<endl;
//  cout<<"capacity of v1:"<<v1.capacity()<<endl;
//  v1.push_back(8);
//  cout<<"size of v1:"<<v1.size()<<endl;
//  cout<<"capacity of v1:"<<v1.capacity()<<endl;

// //  second method to initalize vector
// // vector<int>v3={1,2,3,4,5};





// //Delete value from vector
// vector<int>vnew;
// vnew.push_back(4);
// vnew.push_back(41);
// vnew.push_back(14);
// vnew.push_back(42);
// vnew.push_back(84);
// vnew.pop_back();// last element delete
// cout<<"size of vnew: "<<vnew.size()<<endl;
// cout<<"capacity of vnew:"<<vnew.capacity()<<endl;

// // let support we are remove 41 from vector
// vnew.erase(vnew.begin()+1);// 1st index ko delete kiya
// cout<<"size of vnew: "<<vnew.size()<<endl;
// cout<<"capacity of vnew:"<<vnew.capacity()<<endl;
// // value print
// for(int i=0;i<vnew.size();i++)
// cout<<vnew[i]<<" ";
// // insert value in vector
// vnew.insert(vnew.begin()+1,50);// 50 ko 1st index pe insert kiya
// cout<<endl;

// vnew[1]=37;// 1st index ko 37 se change kiya
// for(int i=0;i<vnew.size();i++)
// cout<<vnew[i]<<" ";
// cout<<endl;
// vnew.clear();// clear all value from vector
// cout<<"size of vnew:"<<vnew.size()<<endl;
// cout<<"capacity of vnew:"<<vnew.capacity()<<endl;




// vector<int>arr;
// arr.push_back(2);
// arr.push_back(12);
// arr.push_back(21);
// arr.push_back(122);
// cout<<arr[0]<<endl;// 1st index ko print kiya
// cout<<arr.front()<<endl;// 1st index ko print kiya
// // last index ko print kiya
// cout<<arr[arr.size()-1]<<endl;// last index ko print kiya
// cout<<arr.back()<<endl;// last index ko print kiya

//  vector<int>a;
//  // Copy value of 1 vector to another veactor

//  a =arr;//copy value of arr to a
//  cout<<a.size();// size of a vector
//  cout<<endl;


// //  second type se ishe represend kra sakte hai
// for(auto it = arr.begin();it!=arr.end();it++)
//  {
//     cout<<*it<<" ";// it ko dereference kiya
//  }
//  cout<<endl;
// //  second type se ishe represend kra sakte hai
//  for(auto i:arr)
//  cout<<i<<" ";// i ko dereference kiya


vector<int>ans;
ans.push_back(5);
ans.push_back(235);
ans.push_back(15);
ans.push_back(54);
ans.push_back(125);

//sort in increasing order
sort(ans.begin(),ans.end());// sort function use kiya
for(int i=0;i<ans.size();i++)
cout<<ans[i]<<" ";// i ko deference kiya
cout<<endl;
// //sort in decreasing order
// sort(ans.begin(),ans.end(),greater<int>());// sort function user kiya
// for(int i=0;i<ans.size();i++)
// cout<<ans[i]<<" ";// i ko deference kiya
// cout<<endl;
// // new method to sort in decreasing order
// sort(ans.rbegin(),ans.rend());// sort function user kiya
// for(int i=0;i<ans.size();i++)
// cout<<ans[i]<<" ";


// search in binary search
cout<<binary_search(ans.begin(),ans.end(),55)<<endl;

// index finding in vector
cout<<find(ans.begin(),ans.end(),54)-ans.begin()<<endl;// 54 ka index print kiya



}