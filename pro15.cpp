#include<iostream>
using namespace std;

// char convert(char name)
// {
//     char ans=name-'a'+'A';
//     return ans;
// }

// int main()
// {
//   char name;
//   cout<<"enter the number";
//   cin>>name;
//   cout<<convert(name)<<endl;
// }


// armstrong no 2

// int coutdigit(int n)
// {
//     int count=0;
//     while(n)
//     {
//         count++;
//         n/=10;
//     }
//     return count;
// }
// bool Armstrong(int num, int digit)
// {
//     int n=num,ans=0,rem;
//     while(n)
//     {
//         rem=n%10;
//         n/=10;
//         ans=ans+pow(rem,digit);
//     } 
//     if(ans==num)
//     return 1;
//     else
//     return 0;
// }

// int main(){
//     int num;
//     cin>>num;
//     // Count digit
//     int digit= coutdigit(num);
//     //Armstrong number
//     cout<<Armstrong(num,digit);
// }



bool isrectangle(int a,int b,int c,int d){
    if((a==b && c==d) ||(a==c && b==d)||(a==d && b==c)){
    return 1;
    }
    return 0;
}

int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int s=isrectangle(a,b,c,d);
    cout<<s;
   return 0;
}