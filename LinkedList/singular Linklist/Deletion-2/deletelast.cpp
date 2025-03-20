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

Node *createLINK(int arr[], int index, int size)
{
    if (index == size)
    {
        return NULL;
    }
    Node *temp = new Node(arr[index]);
    temp->next = createLINK(arr, index + 1, size);
    return temp;
}

void printList(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteList(Node *&head)
{
    if (head != NULL)
    {
        if (head->next == NULL)
        {
            Node *temp = head;
            head = NULL;
            delete temp;
        }
        else
        {
            Node *curr = head;
            Node *prev = NULL;
            while (curr->next != NULL)
            {
                prev = curr;
                curr = curr->next;
            }
            delete curr;
            prev->next = NULL;
        }
    }
}

int main()
{
    Node *head = NULL;
    int arr[] = {2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    head = createLINK(arr, 0, size);

    cout << "Linked List: ";
    printList(head);

    // Delete a node at the end
    if (head != NULL)
    {  //only one node present
        if (head->next == NULL)
        {
            Node *temp = head;
            head = NULL;
            delete temp;
        }
        //more than 1 node present 
        else
        {
            Node *curr = head;
            Node *prev = NULL;
            while (curr->next != NULL)
            {
                prev = curr;
                curr = curr->next;
            }
            delete curr;
            prev->next = NULL;
        }
    }

    cout << "After Deletion: ";
    printList(head);

    // Free memory
    deleteList(head);

    return 0;
}
