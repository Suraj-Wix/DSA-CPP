#include <iostream>
using namespace std;
int main()
{

    // int row, col;

    // for (row=1;row<=5;row++)
    // {

    //     for (col=1;col<=5;col++)
    //     {
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    //  int row, col;

    // for (row=1;row<=4;row++)
    // {

    //     for (col=1;col<=5;col++)
    //     {
    //         cout<<"10"<<" ";
    //     }
    //     cout<<endl;
    // }

    // int row, col;

    // for (row = 1; row <= 5; row++)
    // {

    //     for (col = 1; col <= 5; col++)
    //     {
    //         cout << row << " ";
    //     }
    //     cout << endl;
    // }

    // int row, col;

    // for (row = 1; row <= 5; row++)
    // {

    //     for (col = 1; col <= 5; col++)
    //     {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    //  int row, col;

    // for (row = 1; row <= 5; row++)
    // {

    //     for (col = 5; col >= 1; col--)
    //     {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    // int row, col;

    // for (row = 1; row <= 5; row++)
    // {

    //     for (col = 1; col <= 5; col++)
    //     {
    //         cout << col*col*col << " ";
    //     }
    //     cout << endl;
    // }

    // int row, col;

    // for (row = 1; row <= 5; row++)
    // {

    //     for (col = 1; col <= 5; col++)
    //     {
    //         cout << row << " ";
    //     }
    //     cout << endl;
    // }

    // int row,col;
    // for (row=1;row<=5;row++){
    //     char name='a';
    //     for(col=1;col<=5;col++){
    //         if((col==1 || col==2 )&& (row==1))
    //         cout<<"_"<<" ";
    //         else if(col==1 && row==4){
    //             cout<<"_"<<" ";
    //         }
    //         else if(col==5 && row==5)
    //         cout<<"_"<<" ";
    //         else
    //         cout<<name<<" ";
    //     }
    //     cout<<endl;
    // }

    // int row ,col;
    // for(row=1;row<=5;row++)
    // {
    //     for(char col='a';col<='e';col++){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    // int row ,col;

    // for(row=1;row<=5;row++)
    // {
    //     for( col=1;col<=5;col++)
    //     {
    //        char name='a'+col-1;
    //         cout<<name<<" ";
    //     }
    //     cout<<endl;
    // }

    // last question

    int row,col;
    // int count = 1;
    for (row = 1; row <= 5; row = row + 1)
    {
        for ( col = 1; col <= 5; col = col + 1)
        {
            // cout << count << " ";
            // count = count + 1;
            cout<<(row-1)*5+col<<" ";
        }

        cout << endl;
    }
}