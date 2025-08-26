#include <iostream>
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
   Node *Head;
   Head= NULL; // Initialize the head pointer to NULL
   // Head = new Node(4);         // create a new node with value 4
   // cout << Head->data << endl; // print the value of the node
   // cout << Head->next << endl; // print the next pointer (should be NULL)

   int arr[] = {2,4,6,8,10};// Array of values to be inserted into the linked list

   // Insert the Node at beginning

   // Linked List doesnt exist
   for (int i = 0; i < 5; i++)
   {
      if (Head == NULL)
      {
         Head = new Node(arr[i]); // create a new node with value 4
      }

      // linked list exist
      else
      {
         Node *temp;
         temp = new Node(arr[i]); // create a new node with value 5
         temp->next = Head;  // point the new node to the current head
         Head = temp;        // update head to point to the new node
      }
   }
// print the values in the linked list
    Node*temp=Head;
    while(temp != NULL)
   //  while(temp)
    {
         cout << temp->data << " "; // print the value of the node
         temp = temp->next;          // move to the next node
    };
    


}