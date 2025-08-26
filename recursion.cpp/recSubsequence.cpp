// #include <iostream>
// using namespace std;
// #include <vector>

// void subsequence(int arr[], int index, int n, vector<vector<int>> &ans, vector<int> &temp)
// {
//     if (index == n)
//     {
//         ans.push_back(temp);
//         return;
//     }

//     // not included
//     subsequence(arr, index + 1, n, ans, temp);
//     // included
//     temp.push_back(arr[index]);
//     subsequence(arr, index + 1, n, ans, temp);
//     temp.pop_back(); // backtrack to remove the last element added
// }

// int main()
// {
//     int arr[] = {1, 2, 3};
//     vector<vector<int>> ans;
//     vector<int> temp;
//     subsequence(arr, 0, 3, ans, temp);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         for (int j = 0; j < ans[i].size(); j++)
//         {
//             cout << ans[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// output
// 1 2 3
//
// 3
// 2
// 2 3
// 1
// 1 3
// 1 2
// 1 2 3


// input given string ("a b c") find subsequences 

#include <iostream>
using namespace std;
#include <vector>
#include <string>

void subset(string &s, int index, int n, vector<vector<char>> &ans, vector<char> &temp)
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
    temp.pop_back(); // backtrack to remove the last element added
}
int main()
{
    string s = "abc"; // input given string
    vector<vector<char>> ans;
    vector<char> temp; // to store the current subsequence
    subset(s, 0, s.size(), ans, temp);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

