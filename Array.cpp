#include<iostream>
using namespace std;

int main(){

    // int arr[5]//array declare

    // rule 1

//     int arr[5]={1,2,3,4,5}; // give size code of array 

//     for(int i=0; i<5; i++)
//   cout<<arr[i]<<" ";
//   return 0;

//  rule 2

// int array[]={1,2,3,4,5,6}; // bithout give the size of array
// for (int i=0; i<6; i++)
// cout<<array[i]<<" ";

// return 0;


// rule 3

// int arr[6]={1,2,3}; // the size of array 6 but element are 3 run the code
// // the 3 empthy space element they have to store garbage value


// for(int i=0; i<6;i++)
// cout<<arr[i]<<" ";

// return 0;


// rule 4;



// int arr[6]={0}; // the size of arr are 6 but element are zero and the result
// for(int i=0;i<6;i++)
// cout<<arr[i]<<" ";
// return 0;

// rule 5
// let support it take a value of user and then reults


// int arr[6]; // the size of arr are 6 but take a input from user
// for(int i=0; i<6;i++)
// cin>>arr[i];

// for(int i=0; i<6; i++)

// cout<<arr[i]<<" ";

// return 0;


// take a size of user and then print 
//  but they have a bad habit for coder

// jab array ka implementaion hua tha tab main
// kaha gya tha ki app jab ushka size banaye tho variable yani jo size change hor raha hai nhi ho sakta hai 
// ush ke and constant value ko hi rakhe 

// int size;
// cin>>size;
// int arr[1000];//[size] me variable me constant value hi
// rakhe  abhi toh aap choti value rakhe jab aap badi value rakhenge toh erro aayega
// for(int i=0;i<size;i++)
// cin>>arr[i];

// for( int i=0 ;i<size; i++)
// cout<<arr[i]<<" ";

// return 0;


// int arr[5]={1,2,3,4,5}; //jab array[0]; rakh rahe toh 1 de dega
// arr[5]; dalenge toh erro aayega  ushne aap ko warning de 
// vaha ka access nhi hai jaha aap ja rahe aap out of the bound chelege
// aap 0,1,2,3,4 index dal sakte hai aap but 5th index ko access kr ko koshish kr rahe 
// vaha pr koi bhi rendom value rahi hogi vahi kar de rahi hai
// cout<<arr[0];

// return 0;



// a ka size  print krana ho toh  char a ,int a, bool a etc.
// kr sakte hai

// int arr[5]={1,2,3,4,5};
// int a; // char a;, int a; float a; bool a, etc.
// cout<<sizeof(a)<<" ";

// return 0;



// agar aap ko array size dudhana ho aap kaise pata kr sakte hai\

// int arr[5]={1,2,3,4,5}; //ans 20 kyu diya because har array 4byte le raha hai  total 20 ho gya
// cout<<sizeof(arr)<<" ";

// return 0;



// agar mujhe pata krana ho ki array me kitne element present ho
// 20/4=5
// int arr[5]={1,2,3,4,5};
// cout<<sizeof(arr)/sizeof(arr[0])<<" ";

// return 0;


// ab main size of arr find kr na ho kaise nikalenge

// int arr[5] = {2,3,1,7,8};
// int a; // char a, float a; etc

// cout<<sizeof(a)<<endl; // bhaiya ye size of kya ye function kaun sa function inbuilt function
// return 0;


// minimum value ko find kr na ho toh 
// int arr[5]={2,3,1,7,8};

// int ans = INT_MAX;

// for(int i=0; i<5;i++)
// {
// if(arr[i]<ans)

// ans= arr[i];
// }

// cout<<ans;

// return 0;


// maximum value ko find kr na ho toh array me 

int arr[5]={2,3,1,7,8};

int ans = INT_MIN;

for(int i=0; i<5;i++)
{
if(arr[i]>ans)

ans= arr[i];
}

cout<<ans;

return 0;


}
