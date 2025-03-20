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

    // delete at particular position
    int pos = 4;
    // delete at start
    if (pos == 1)
    {
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
        }
        else

        {
            Node *temp = head;
            head = head->next;
            delete temp;

            head->prev = NULL;
        }
    }
    else
    {
        Node *curr = head;
        while (--pos)
        {
            curr = curr->next;
        }
        // delte at end
        if (curr->next == NULL)
        {
            curr->prev->next = NULL;
            delete curr;
        }
        else
        {
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
            delete curr;
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

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node *prev;

//     // constructor
//     Node(int value)
//     {
//         data = value;
//         next = NULL;
//         prev = NULL;
//     }
// };

// Node *createDLL(int arr[], int index, int size, Node *back)
// {
//     if (index == size)
//     {
//         return NULL;
//     }
//     Node *temp = new Node(arr[index]);
//     temp->prev = back;
//     temp->next = createDLL(arr, index + 1, size, temp);
//     return temp;
// }

// void deleteNode(Node *&head, int pos)
// {
//     if (!head) return; // If list is empty

//     // Deleting first node
//     if (pos == 1)
//     {
//         Node *temp = head;
//         head = head->next;
//         if (head) head->prev = NULL;
//         delete temp;
//         return;
//     }

//     // Finding the node to delete
//     Node *curr = head;
//     for (int i = 1; curr && i < pos; i++)
//     {
//         curr = curr->next;
//     }

//     if (!curr) return; // If pos is out of bounds

//     // Deleting last node
//     if (!curr->next)
//     {
//         curr->prev->next = NULL;
//         delete curr;
//         return;
//     }

//     // Deleting middle node
//     curr->prev->next = curr->next;
//     curr->next->prev = curr->prev;
//     delete curr;
// }

// void printDLL(Node *head)
// {
//     while (head)
//     {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// // Free the memory
// void freeDLL(Node *&head)
// {
//     while (head)
//     {
//         Node *temp = head;
//         head = head->next;
//         delete temp;
//     }
// }

// int main()
// {
//     Node *head = NULL;
//     int arr[] = {1, 2, 3, 4, 5};

//     head = createDLL(arr, 0, 5, NULL);

//     int pos = 2; // Deleting at position 2
//     deleteNode(head, pos);

//     printDLL(head);

//     // Free memory
//     freeDLL(head);

//     return 0;
// }
