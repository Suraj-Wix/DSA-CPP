#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    // arr++; // This line is incorrect and will cause a compilation error. You cannot increment an array name directly.
    // arr=arr+2; // This line is also incorrect. You cannot change the address of an array name directly. ye value hoti hai constant type ki ish ke change nhi kar sakte hai
    int* ptr=arr; // pointer to the first element of the array

//     // print the address of the first element or 0 index of the arrya
//     cout<<arr<<endl; // prints the address of the first element
//     cout<<arr+0<<endl; // prints the address of the first element
//     cout<<&arr[0]<<endl; // prints the address of the first element
//     cout<<ptr<<endl; // prints the address of the first element

//     // print the address of the second element or 1 index of the arrya
//     cout<<arr+1<<endl; // prints the address of the second element   
    

//   //Print the value of 0 index
//   cout<<arr[0]<<endl; // prints the value of the first element
//   cout<<*ptr<<endl; // prints the value of the first element
//   cout<<*(arr+0)<<endl; // prints the value of the first element
//   cout<<*ptr<<endl; // prints the value of the first element


  
// //   saare address ko print kar do 

//     for(int i=0;i<5;i++)
//     {
//         cout<<arr+i<<" "<<*(arr+i)<<endl; // prints the address and value of each element
//     }


//     for(int i=0;i<5;i++)
//     {
//         cout<<arr+i<<endl; // prints the address and value of each element
//     }

//     // saare value ko print kar do
//     for(int i=0;i<5;i++)
//     {
//         cout<<*(arr+i)<<endl; // prints the value of each element
//     }


    // print all the values
    for(int i=0;i<5;i++)
    cout<<ptr[i]<<" "; // prints the value of each element using pointer arithmetic

    // print all the addresses
     for(int i=0;i<5;i++)
     cout<<ptr+i<<endl;
     //Arithmetic operation ptr++;ptr-- ptr=ptr+1

     // print all the values

    //  for(int i=0;i<5;i++)
    //  {
    //     cout<<*ptr<<" ";// prints the value of each element 
    //         ptr++; // move the pointer to the next element
    //    }

   ptr =ptr+3; 
   cout<<*ptr<<endl;// prints the value of the fourth element using pointer arithmetic

   ptr =ptr-2;
   cout<<*ptr<<endl; // prints the value of the second element using pointer arithmetic
}
