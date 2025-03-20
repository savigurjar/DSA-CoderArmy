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

    // delete at start

    if (head != NULL)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        if (head != NULL)
        {
            head->prev = NULL;
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
