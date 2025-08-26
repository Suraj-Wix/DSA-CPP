#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// unordered_multimap
// It is similar to multimap
// It store data in key value pair
// It is implemented using hash table
// It is used to store duplicate keys
// It is used to store data in no order
// It is used to store data in O(1) time complexity
// m[200]=70 // 200 is key and 70 is value inserted and update the value of 200 
// ye krna allow nhi hoga

int main()
{

    unordered_multimap<int, int> m;
    m.insert(make_pair(20, 30));
    m.insert(make_pair(30, 310));
    m.insert(make_pair(40, 230));
    m.insert(make_pair(20, 230));
    m.insert(make_pair(50, 30));
    

    for(auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
        // cout << (*it).first << " " << (*it).second << endl;
    }
}