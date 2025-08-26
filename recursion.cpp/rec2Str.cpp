#include<iostream>

using namespace std;

int count(string str, int index)
{
    if(index==-1) // base case: if index is -1, we have checked all characters
        return 0;
    //vowel hoga
    if(str[index]=='a' || str[index]=='e' || str[index]=='i' || str[index]=='o' || str[index]=='u')
        return 1 + count(str, index-1);
    // nhi hoga
    else
        return count(str, index-1);
}


int main(){

    // count vowels in a string
    string str="roeits";
    cout<<count(str ,5)<<endl;


}