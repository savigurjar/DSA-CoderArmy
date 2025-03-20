#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node *createLinkedList(int arr[], int index, int size,Node *prev)
{ // base case
    if (index == size)
        return prev;

    Node *temp;
    temp = new Node(arr[index]);
    temp->next = prev;
    
    return createLinkedList(arr,index+1,size,temp);
   
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int arr[] = {1, 2, 3, 4,6};
    head = createLinkedList(arr, 0, 4,head); //Null bhi pas kr skte h
    

    // Print the linked list
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}