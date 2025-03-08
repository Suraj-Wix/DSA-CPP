#include<iostream>
using namespace std;

int main()
{
    // 201to200
    // int i;
    // for(i=101;i<=200;i++)
    // {
    //     cout<<i<<endl;
    // }

// a to z print
// char name;
// for(name='a';name<='z';name=name +1)
// {
//     cout<<name<<endl;
// }

// n=10; 10 to 1 number print
// int n,i;
// cout<<"enter the number";
// cin>>n;
// for(i=n;i>=1;i=i-1){
//     cout<<i<<" ";
// }

// 1 to 100 print , condition jump  3 
// for(int i=1;i<=100;i=i+3)
// {
//     cout<<i<<" ";
// }


// 1  to 10 number not include 10


// int n;

// for(int i=1;i<10;i++ )
// {
//     cout<<i;
// }

// 6 ka table print.

// int n,i;
// cout<<"enter the number: ";
// cin>>n;
// for(int i=1;i<=10;i++)
// {
//     cout<<n<<"*"<<i<<"="<<n*i<<endl;
// }

// method2

// int i;

// for(i=6;i<=60;i=i+6)
// {
//     cout<<i<<endl;
// }

// int n=6;

// for(int i=n;i<=10*n;i=i+n)
// {
//     cout<<i<<endl;
// }

//print 4 pow 3
// int n,pow,i,num;

// cout<<"enter the number: ";
// cin>>n;
// cout<<"Enter the power: ";
// cin>>pow;
// num=n;
// for(i=1;i<pow;i++)
// {
//     num=num*n;
// }
// cout<<num;


// sum n natural number
// int n,sum=0;

// for(int i=1;i<=n;i=i+1)
// {
//     sum=sum+1;
// }

// cout<<sum;

// int n,i,sum=0;
// cout<<"Enter the number: ";
// cin>>n;
// cout<<(n*(n+1))/2;
//  int n ,fact=1,i;
// cout<<"enter the number: ";
// cin>>n;
// for(i=1;i<=n;i++)
// {
//     fact=fact*i;
// }
// cout<<fact;

// print prime or not

int n,i;
cout<<"enter the number: ";
cin>>n;
if(n<2)
{
    cout<<"not prime: ";
    return 0;
}
else{
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"not prime";
            return 0;

        }
    }
    cout<<"prime";
    return 0;
}
return 0;

}