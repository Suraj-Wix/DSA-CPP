#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// only unique value will be stored in set
// store value in sorted order (ascending order)
// insertion,deletion, and search operations have log(n) time comlexity
//(O(log(n)), making them fast for mostuse cases.
// generally implemented using red-black trees
// we can sort it in descending order also using greater<type>

class Person{
    public:
    int age;
    string name;

    bool operator<(const Person &other)const{
        // return age<other.age;// ascending order
        return age > other.age;// descending order
    }
};


int main()
{
    // creating a set
    // set<int> s;
    // s.insert(10);
    // s.insert(20);
    // s.insert(110);
    // s.insert(200);
    // s.insert(10);
    // s.insert(20);
    // s.insert(110);
    // s.insert(210);
    // for(auto it=s.begin();it!=s.end();it++)
    // {
    //     cout<<*it<<endl;
    // }

//      set<int, greater<int> >s;// creating a set in descending order
//     s.insert(10);
//     s.insert(20);
//     s.insert(110);
//     s.insert(200);
//     s.insert(10);
//     s.insert(20);
//     s.insert(110);
//     s.insert(210);

    
//     for(auto it=s.begin();it!=s.end();it++)
//     {
//         cout<<*it<<endl;
//     }

// set<int, greater<int> >s;// creating a set in descending order
//     s.insert(10);
//     s.insert(20);
//     s.insert(110);
//     s.insert(200);
//     s.insert(10);
//     s.insert(20);
//     s.insert(110);
//     s.insert(210);

//     //delete
//     s.erase(110);// delelte 110

//     // 210 200 110 20 10
//     // search the element
    
//     // find // return iterator of that number,
//     // if(s.find(280)!=s.end())
//     // cout<<"Present\n";
//     // else
//     // cout<<"Absent\n";


//     // count , count of that number
//     // if(s.count(210))
//     // cout<<"present\n";
//     // else
//     // cout<<"absent\n";


//     cout<<s.count(110)<<" "; //0 

    
//     // for(auto it=s.begin();it!=s.end();it++)
//     // {
//     //     cout<<*it<<endl;
//     // }





set<Person>s;
// class ke saare object ko insert kana padega

Person p1,p2,p3;
p1.age=10,p1.name="rohit";
p2.age=30,p2.name="mohit";
p3.age=5,p3.name="sohil";

s.insert(p1);
s.insert(p2);
s.insert(p3);

for(auto it=s.begin();it!=s.end();it++)
{
    cout<<it->age<<" "<<it->name<<endl;

    // cout<<(*it).age<<" "<<(*it).name<<endl;
}





}