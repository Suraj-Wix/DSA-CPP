#include <iostream>
using namespace std;

int main()
{
    // int i;
    // for(int i=100;i<=200;i=i+1)
    // cout<<i<<endl;

    // char name;

    // for(name='a';name<='z';name=name+1){
    //     cout<<name<<endl;
    // }

    // int n ,i;
    // cout<<"Enter the number";
    // cin>>n;
    //     for(i=n;i>=1;i--){
    // cout<<i<<endl;
    // }

    // int i;
    // for(i=1;i<=100;i=i+3){
    //     cout<<i<<endl;
    // }

    // int i;
    // cout<<"enter the number";
    // cin>>i;
    // for(i=1;i<10;i++){
    //     cout<<i<<endl;
    // }

    // int n ,i;
    // cout<<"enter the table";
    // cin>>n;
    // for(i=1;i<=10;i++){
    //  cout<<n<<"*"<<i<<"="<<i*n<<endl;
    // }

    //     int n,pow, i, num;
    //     cout<<"enter the number";
    //     cin>>n;
    //     cout<<"enter the power:";
    //     cin>>pow;

    //     num = n ;
    //     for(i=1;i<pow;i=i+1)
    //     {
    //         num=num*n;
    //     }
    //    cout<<num;

    // int n ,i ,sum=0;
    // cout<<"enter the namber:";
    // cin>>n;

    // for(i=1 ; i<=n;i++){
    // sum=sum+i;
    // }
    // cout<<sum;

    // squre

    // int i,n,sum=0;
    // cin>>n;

    // for(i=1;i<=n;i++){

    //     sum+=(i*i);
    // }

    // cout<<sum;

    // fact

    // int i,n, fact=1;
    // cout<<"enter the number";
    // cin>>n;for(i=1;i<=n;i++){
    //     fact=fact*i;
    // }
    // cout<<fact;

    // prime number

    int n, i;
    cout << "enter the number";
    cin >> n;
    if (n < 2)
    {
        cout << "not prime";
        return 0;
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                cout << "not prime";
                return 0;
            }
        }
        cout << "prime";
        return 0;
    }
    return 0;
}