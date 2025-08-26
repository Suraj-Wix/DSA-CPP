#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//push_front push_back
//size
//pop_front(),pop_back() 
//iterator
// 15 20 30 40 80

int main()
{
    list<int> l;
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.push_back(80);
    l.push_front(15);
    // l.pop_back();
    // l.pop_front();

    // cout<<l.front()<<" "<<l.back()<<endl;
    // cout<<l.size()<<" ";

    // all values ko print krna hai print kaise kre
    // for(auto it=l.begin(); it!=l.end(); it++)
    // {
    //     cout<<*it<<" ";
    // }
   

    // value kor rverse order me print krana hai
     for(auto it=l.rbegin(); it!=l.rend(); it++)
    {
        cout<<*it<<" ";
    }
}