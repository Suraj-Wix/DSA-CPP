#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// It store date in key value pair
// key should be unique
// It use red-black tree or avl tree for implementation
//  insertion, deletion and search operation have O(log(n)) time complexity
//  (O(log(n)), making them fast for most use cases.

int main()
{
    // creating a multimap
    multimap<int, int> m;

    m.insert(make_pair(20, 30));
    m.insert(make_pair(30, 310));
    m.insert(make_pair(40, 230));
    m.insert(make_pair(20, 230));
    m.insert(make_pair(50, 30));
    // m[100]=60;// 100 is key and 60 is value inserted and update the value of 100
    // m[20]=70; // multimap me ye krna allow nhi ho sakta hai

    for(auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
        // cout << (*it).first << " " << (*it).second << endl;
    }

    // cout<<endl;
    // cout<<m[100]<<endl;// 60 print

   
   
    // agar koi value hi nhi hai to usko kaise figure out kare
    // serch , insert, delete
    // cout<<endl;
    // if(m.count(20))// 200 present hai ya nahi
    // cout<<m[20]<<" ";//0 print

    // m.erase(20);// 20 ko delete kiya
    for(auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
        // cout << (*it).first << " " << (*it).second << endl;
    }
}