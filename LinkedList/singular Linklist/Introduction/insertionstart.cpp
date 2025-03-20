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
int main()
{
    Node *Head;
    // Head = new Node(5);
    // cout << Head->data << endl;
    // cout << Head->next << endl;

    Head = NULL;
    int arr[] = {2, 4, 6, 8, 10};
    for (int i = 0; i < 5; i++)
    {

        // insert the node at beginning
        // linked list doesnot exist
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
        }
        // linked list exist krti ho
        else
        {
            Node *temp;
            temp = new Node(arr[i]);
            temp->next = Head;
            Head = temp;
        }
        // cout << Head->data << endl;
        // cout << Head->next << endl;
    }
    // print the value
    Node *tem = Head;
    while (tem != NULL)
    {
        cout << tem->data << " ";
        tem = tem->next;
    }
}

