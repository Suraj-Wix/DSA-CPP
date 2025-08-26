#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    // constructor to initialize the node with a value
    
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node* CreateLinkedlist(int arr[], int index, int size, Node *prev)
{
    // base case
    {
        if (index == size)
            return prev; // return the previous node when index reaches size
    }
    Node*temp; // create a new node
    temp = new Node(arr[index]); // initialize the node with the value from the array
    temp->next = prev; // set the next pointer of the new node to the previous node
    return CreateLinkedlist(arr, index + 1, size, temp); // recursively call to create the next node
}




int main()
{
    Node *Head;
    Head = NULL; // Initialize the head pointer to NULL
    int arr[] = {2, 4, 6, 8, 10}; // Array of values to be inserted into the linked list
    
    Head = CreateLinkedlist(arr, 0, 5, Head); // Create the linked list from the array
    //Insert Node at particular Position
    int x=3;// position to insert the node
    int value=30;// value to be inserted
    Node *temp=Head;
    x--; // Decrement x to convert to 0-based index
    while(x--)
    {
        temp = temp->next; // Move to the next node until we reach the desired position
    };
    Node*temp2= new Node(value); // Create a new node with the value to be inserted
    temp2->next = temp->next; // Set the next pointer of the new node to the next node of the current node
    temp->next = temp2; // Set the next pointer of the current node to the new node

    // Print the values in the linked list
    // Node *temp;
    temp = Head;
    while (temp)
    {
        cout << temp->data << " "; // print the value of the node
        temp = temp->next; // move to the next node
    }
}