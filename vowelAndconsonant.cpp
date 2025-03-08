#include<iostream>
using namespace std;
int main()
{
  int i=1; 
  while(i!=0){
            char ch;
            cout<<"enter input: ";
            cin>>ch;
            
        if(ch=='a'|| ch== 'e'||  ch=='i'|| ch== 'o'|| ch== 'u')
        cout<<"vowel";

        else{
            cout<<"consonant";
        }
        cout<<endl;

        cout<<"want exit press 0:  ";
        cin>>i;

  }
  

}