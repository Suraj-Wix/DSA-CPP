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
    Head = NULL;                  // Initialize the head pointer to NULL
    int arr[] = {2, 4, 6, 1,7}; // Array of values to be inserted into the linked list

    Head = CreateLinkedList(arr, 0, 5); // Create the linked list from the array

    // delete a node at end
    if (Head != NULL) // check if the linked list is empty
    {
        // Only one Node is persent
        if (Head->next == NULL)
        {
            // 1st rule
            // delete Head; // delete the only node
            // Head = NULL; // set head to NULL
            // 2nd rule
            Node *temp = Head;  // store the current head in a temporary variable
            delete temp; // delete the temporary variable to free memory
            Head = NULL;        // set head to NULL
        }
        // More than one Node is present
        else
        {
            Node *curr = Head; // start from the head
            Node *prev = NULL; // previous node pointer

            // curr->next not NULL
            while (curr->next != NULL)
            {
                prev = curr;       // store the current node as previous
                curr = curr->next; // move to the next node
            }
            prev->next = curr->next; // set the next of previous node to NULL
            delete curr;            // delete the last node
        }
    }
    // Print the values in the linked list
    Node *temp = Head; // start from the head
    while (temp)
    {
        cout << temp->data << " "; // print the value of the node
        temp = temp->next;          // move to the next node
    }
}

