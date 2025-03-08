#include<iostream>
using namespace std;

// int Sum(int m, int n)// function declare void Sum(int m,int n) 
// {

// int ans = m+n;//function define 
// return ans;

// }

// int Mul(int m,int n)
// {
//     int ans =m*n;
//     return ans;
// }

// void fun()
// {
//     cout<<"hello coder army\n";
// }  


// int main()
// {

//     int a,b;
//     cout<<"enter 2 number: ";
//     cin>>a>>b;
    
//     // function call
//     cout<<Sum(a,b); //int ans =Sum(a,b); bhi likh sakte hai
//     // Sum(a,b)//jab function declare void likhate hai aise bhi likh sakte hai 
//     //but aise likhate hai toh cout<<Sum(a,b) likhane ki jarurt nhi hai
//     cout<<endl;
//     cout<<Mul(a,b);
//     cout<<endl;
//     fun();
// }




// prime number and fact. 


// bool prime(int n ) // function declare

// {
//     if(n<2)
//     return 0;

//     for(int i=2;i<=n-1;i++)
//     {

//         if(n%i==0)
//         return  0;
        
//     }
//     return 1;
// }

// int fact(int n)
// {
//     int ans=1;

//     for(int i=1;i<=n;i++)
//     ans=ans*i;
//     return ans;

// }



// int main(){

//     int a,b;
//     cout<<"enter the number";
//     cin>>a>>b;
    
//     cout<<prime(a)<<endl;
//     cout<<fact(a)<<endl;
//     cout<<prime(b)<<endl;
//     cout<<fact(b)<<endl;
//     cout<<prime(b-a)<<endl;
//     cout<<fact(b-a)<<endl;
// };

// void swap(int &a, int &b) // pass by reference
// {
//     int c;
//     c=a;
//     a=b;
//     b=c;
// }


// int main()
// {
//     int a,b;
//     cin>>a>>b;
    
//     swap(a,b);
//     cout<<a<<" "<<b<<" ";
// }


// function overloading

// void swap(int &a, int &b) // pass by reference
// {
//     int c;
//     c=a;
//     a=b;
//     b=c;
// }
//  void swap(float &c,float &d) // function overloading
//  {
//     float r=c;
//     c=d;
//     d=r;
//  }

// int main()
// {
//     int a,b;
//     cin>>a>>b;
    
//     swap(a,b);
//     cout<<a<<" "<<b<<endl;

//     float f1=4.8, f2=3.6;
//     swap(f1,f2);
//     cout<<f1<<" "<<f2;
// }

// problem