#include<iostream>
using namespace std;

// int main()
// {
//     int n =5;
//     //iterative approach
//     for(int i=n;i>0;i--)
//     {
//         cout<<i<<" days left for my birthday"<<endl;
//     }
//     cout<<"Happy Birthday to me"<<endl;
// }

// function ki help se kase kru

// void fun3(int n)
// {
// cout<<n<<" days left for my birthday"<<endl;
// }
// void fun2(int n)
// {
// cout<<n<<" days left for my birthday"<<endl;
// }
// void fun1(int n)
// {
// cout<<n<<" days left for my birthday"<<endl;
// }

// void fun0(int n)
// {
// cout<<"happy birthday"<<endl;
// }



// int main()
// {
//     fun3(3);
//     fun2(2);
//     fun1(1);
//     fun0(0);
// }

// ab mai chahta ki ak function se hi sab kuch ho jaye
// void fun0(int n)
// {
// cout<<"happy birthday"<<endl;
// }
// void fun1(int n)
// {
// cout<<n<<" days left for my birthday"<<endl;
// fun0(0);
// }
// void fun2(int n)
// {
// cout<<n<<" days left for my birthday"<<endl;
// fun1(n-1);
// }
// void fun3(int n)
// {
// cout<<n<<" days left for my birthday"<<endl;
// fun2(n-1);

// }

// int main()
// {
//     fun3(3);
// }


//ak 100 time function kra sakte hai nhi n toh print toh
// vahi value kra raha hai but function name different hai



void fun3(int n)
{
    // base case
if(n==0)
{
    cout<<"Happy Birthday to pratyush"<<endl;
    return; // base case se bahar nikal jao
}
    cout<<n<<" days left for my birthday"<<endl;
    fun3(n-1); // recursive call
}

int main()
{
    int n =3;
    fun3(8); // calling the function with n=3
}