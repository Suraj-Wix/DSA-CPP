#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // constructor create kr liye taki value initialize kr paye
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

int main()
{
    Node *Head, *Tail;
    Tail = Head = NULL;           // Initialize the head pointer to NULL
    int arr[] = {2, 4, 6, 8, 10}; // Array of values to be inserted into the linked list

    // Insert the Node at end

    for (int i = 0; i < 5; i++)
    {
        // Linked List is empty
        if (Head == NULL)
        {
            Head = new Node(arr[i]); // create a new node with value 10
            Tail= Head; // Tail ko bhi Head se point krwa diya
        }

        // Linked List exist karti hai
        else
        {
            Tail->next = new Node(arr[i]); // create a new node with value 10
            Tail= Tail->next; // update Tail to point to the new node
        }
    }


    // print the values in the linked list
    Node *temp;
    temp = Head;
    while(temp)
    {
        cout<<temp->data<<" "; // print the value of the node
        temp = temp->next; // move to the next node

    }
}