#include<iostream>
#include<vector>
#include<string>
using namespace std;


void subset(string &s, int index, int n, vector<string> &ans, string &temp)
{
    if (index == n)
    {
        ans.push_back(temp);
        return;
    }

    // not included
    subset(s, index + 1, n, ans, temp);

    // included
    temp.push_back(s[index]);
    subset(s, index + 1, n, ans, temp);
    temp.pop_back(); // backtrack to remove the last character added
}

int main()
{
    string s="abc";
    vector<string>ans; // final answer
    string temp;
    subset(s,0,s.size(),ans,temp);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}