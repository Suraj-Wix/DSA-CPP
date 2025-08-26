#include <iostream>
using namespace std;

// int main()
// {
// //Print n to 1
// int n=5;
// for(int i=n;i>0;i--)
// cout<<i<<endl;

// // Print n to 1 using recursion
// void print(int n)
// {
//     // base case
//     if (n == 1)
//     {
//         cout << 1 << endl; // print 1
//         return;
//     }
//     cout << n << endl; // print current value
//     print(n - 1);      // recursive call with n-1
// }

// int main()
// {
//     int n = 5; // Example value
//     print(n);  // Call the function to print from n to 1
//     // return 0;  // Return success
// }



// Print n to 1 even number print using recursion
void print(int n)
{
    // base case
    if (n == 2)
    {
        cout << 2<< endl; // print 2
        return;
    }
    cout << n << endl; // print current value
    print(n - 2);      // recursive call with n-2
}

int main()
{
    int n = 10; // Example value
    print(n);  // Call the function to print from n to 1
    // return 0;  // Return success
}
