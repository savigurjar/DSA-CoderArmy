#include <iostream>
using namespace std;
// time complexity O(N)
class Node
{
public:
    int data;
    Node *next;
};

// Function to print the linked list
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
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

    // for (int i = 1; i < n; i++)
    for (int i = n; i >1; i++)
    {
        Node *newNode = new Node;
        newNode->data = arr[i];
        newNode->next = NULL;

        temp->next = newNode; // Link previous node to the new node
        temp = newNode;       // Move temp to the new node
    }

    // Print the linked list
    print(head);

    return 0;
}
