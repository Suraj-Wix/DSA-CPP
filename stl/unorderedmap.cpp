#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//unique keys are present, duplicate keys are not allowed
// not necessary  it should be in sorted form
// Hashing technique is used
// insertion, deletion and search operation have O(1) time complexity

//unordered_multimap homework

int main()
{
   unordered_map<int,int>m;
    m.insert(make_pair(20, 30));
    m.insert(make_pair(30, 310));
    m.insert(make_pair(40, 230));
    m.insert(make_pair(20, 230));
    m.insert(make_pair(50, 30));

    m[200]=70;// 200 is key and 70 is value inserted and update the value of 200
    for(auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
        // cout << (*it).first << " " << (*it).second << endl;
    }
}