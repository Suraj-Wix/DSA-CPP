#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // pair<string, int>p;
    // Two method insert
    // method 1
    // p=make_pair("rohit",30);
//   cout<<p.first<<" "<<p.second<<endl;


    // method 2
    // pair<string, int>p;
    // p.first="rohit";
    // p.second=30;

    // cout<<p.first<<" "<<p.second<<endl;

    // method 3
    // name, age, weight 3 value ko pair me store krna hai kaise kre
   //1st method
    // pair<string, pair<int, int>>p;
    // p.first="rohit";
    // p.second.first=30;
    // p.second.second=80;

//  cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
//  2nd method
//  pair<string, pair<int, int>>p;

//  p=make_pair("rohit",make_pair(25,80));
// cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;


// name, age, weight ab main name aur age ko ak sath stored krna chahata hu aur weight ko alag se pair me stored krna chahata hu
// method 1
// pair<pair<string,int>, int>p;

// p=make_pair(make_pair("rohit",30),80);
// cout<<p.first.first<<" "<<p.first.second<<" "<<p.second<<endl;
//method 2
pair<pair<string,int>, int>p;
p.first.first="rohit";
p.first.second=30;
p.second=80;
cout<<p.first.first<<" "<<p.first.second<<" "<<p.second<<endl;


}
