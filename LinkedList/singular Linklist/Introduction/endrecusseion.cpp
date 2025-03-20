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

Node *createLinkedList(int arr[], int index, int size)
{ // base case
    if (index == size)
        return NULL;

    Node *temp;
    temp = new Node(arr[index]);
    temp->next = createLinkedList(arr, index + 1, size);

    return temp;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int arr[] = {1, 2, 3, 4};
    head = createLinkedList(arr, 0, 4);

    // Print the linked list
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}