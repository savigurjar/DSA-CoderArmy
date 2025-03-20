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
{
    // Base case
    if (index == size)
        return NULL;

    Node *temp = new Node(arr[index]);
    temp->next = createLinkedList(arr, index + 1, size);
    return temp; // Returning the created node
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    Node *head = createLinkedList(arr, 0, 5);

    // Insert node at a particular position
    int x = 3; // Insert position (1-based index)
    int value = 30;

    Node *temp = head;
    x--; // Convert to 0-based index
    while (x-- && temp->next) // Prevents null access
    {
        temp = temp->next;
    }

    Node *temp2 = new Node(value);
    temp2->next = temp->next;
    temp->next = temp2;

    // Print the linked list
    Node *printHead = head;
    while (printHead)
    {
        cout << printHead->data << " ";
        printHead = printHead->next;
    }

    return 0;
}
