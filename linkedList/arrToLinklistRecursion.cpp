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

Node *CreateLinkedList(int arr[], int index, int size)
{
    // Base case: if index is equal to size, return NULL
    if (index == size)
    return NULL;

    Node *temp;// create a new node
    temp = new Node(arr[index]); // initialize the node with the value from the array
    temp->next = CreateLinkedList(arr, index + 1, size); // recursively call to create the next node
    return temp; // return the created node
}

int main()
{
    Node *Head;
    Head = NULL; // Initialize the head pointer to NULL
    int arr[] = {2, 4, 6, 8, 10}; // Array of values to be inserted into the linked list
     
  Head= CreateLinkedList(arr, 0, 5); // Create the linked list from the array

//  print the values in the linked list
    Node *temp;
    temp = Head;
    while(temp)
    {
        cout<<temp->data<<" "; // print the value of the node
        temp = temp->next; // move to the next node

    }
}



