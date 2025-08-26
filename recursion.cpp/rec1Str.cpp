#include<iostream>

using namespace std;

bool checkpal(string str, int start, int end)
{
    // Base case: if the start index is greater than or equal to the end index, it's a palindrome
    if (start >= end) {
        return true;
    }
    
    //not matched
    if(str[start]!=str[end])
        return false;
        ///matched
      else 
      return checkpal(str, start+1, end-1);
}


int main(){
// check palindrome
string str = "naman";
cout<<checkpal(str,0,4);


}