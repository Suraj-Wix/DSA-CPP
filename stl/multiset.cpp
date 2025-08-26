#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // multiset
    //duplicate elements will be persent
    // sorted order hga
    // red-black tree , avl tree

    multiset<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(10);
    s.insert(30);

    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    
}