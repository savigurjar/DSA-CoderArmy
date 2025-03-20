#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

// Recursive function to print the linked list in reverse order
void reversePrint(Node *head)
{
    if (head == NULL)
        return;

    reversePrint(head->next);
    cout << head->data << " ";
}

int main()
{
    int n;
    cin >> n;
    if (n == 0)
        return 0; // Handle empty input case

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Create head node
    Node *head = new Node;
    head->data = arr[0];
    head->next = NULL;

    Node *temp = head; // Pointer to track the last node

    // Corrected loop to create linked list
    for (int i = 1; i < n; i++)
    {
        Node *newNode = new Node;
        newNode->data = arr[i];
        newNode->next = NULL;

        temp->next = newNode; // Link previous node to new node
        temp = newNode;       // Move temp to new node
    }

    // Print the linked list in reverse order
    reversePrint(head);

    return 0;
}
