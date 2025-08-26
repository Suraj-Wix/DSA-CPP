#include <iostream>
using namespace std;

void print(int num, int N)
{
    // base case
    if (num == N)
    {
        cout << num << endl; // print n
        return;
    }

    cout << num << endl; // print the current number
    print(num + 1, N);   // recursive call with num + 1
}

int main()
{
    // Print number from 1 to n;

    int N;
    cin >> N;    // Input the value of n
    print(1, N); // Call the function to print from 1 to n
}