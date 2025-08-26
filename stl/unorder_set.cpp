#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    // unordered_set
    // no order of elements
    // no duplicate elements
    // implemented using hash table
    // average time complexity is O(1)
    // worst case time complexity is O(n)
    // unordered_set<int> s;
    // unordered_set<int>s;
    // s.insert(10);
    // s.insert(20);
    // s.insert(30);
    // s.insert(15);
    // s.insert(11);
    // s.insert(10);
    
    // for(auto it=s.begin();it!=s.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
    
// unorderd_set<int> s; ke ander aur aata hai aap dekte ho
// kie duplicate elements bhi present ho 
    unordered_multiset<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(15);
    s.insert(11);
    s.insert(10);
    
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    
}

// set, multiset, unordered_set, unordered_multiset
//set: Unique elements, sorted order
//multiset: Duplicate elements, sorted order
//unordered_set: Unique elements, no order
//unordered_multiset: Duplicate elements, no order
