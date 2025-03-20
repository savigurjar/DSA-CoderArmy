#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    // constructor
    Node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};
Node *createDLL(int arr[], int index, int size, Node *back)
{
    if (index == size)
    {
        return NULL;
    }
    Node *temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = createDLL(arr, index + 1, size, temp);
    return temp;
}
int main()
{
    Node *head = NULL;
    int arr[] = {1, 2, 3, 4, 5};

    head = createDLL(arr, 0, 5, NULL);

    // insert at given position

    int pos = 2;
    // insert at start
    if (pos == 0)
    {
        // linked list not exist
        if (head == NULL)
        {
            head = new Node(10);
        }
        // exist
        else
        {
            Node *temp = new Node(10);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }

    else
    {
        Node *curr = head;
        // go to the node,after which i have to insert
        while (--pos)
        {
            curr = curr->next;
        }
        // insert at end
        if (curr->next == NULL) // last node
        {
            Node *temp = new Node(10);
            temp->prev = curr;
            curr->next = temp;
        }

        // insert at middle
        else
        {
            Node *temp = new Node(10);
            temp->next = curr->next;
            temp->prev = curr;
            curr->next = temp;
            temp->next->prev = temp;
        }
    }

    // Print the list
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
