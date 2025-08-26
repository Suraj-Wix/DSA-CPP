// #include<iostream>
// using namespace std;

// class Node
// {
//     public:
//     int data;
//     Node*next;

//     // constructor create kr liye taki value initialize kr paye
//     Node(int value)
//     {
//         data=value;
//         next=NULL;
//     }

// };




// int main()
// {

//     Node A1(4);


// }


// dynamic way me ish ke creae kaise kre
#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node*next;

    // constructor create kr liye taki value initialize kr paye
    Node(int value)
    {
        data=value;
        next=NULL;
    }

};




int main()
{

    Node*Head;
    Head=new Node(4); // create a new node with value 4

    cout<<Head->data<<endl; // print the value of the node
    cout<<Head->next<<endl; // print the next pointer (should be NULL)
}