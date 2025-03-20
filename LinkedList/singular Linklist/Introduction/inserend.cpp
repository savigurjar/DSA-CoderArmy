#include <iostream>
using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int value)
//     {
//         data = value;
//         next = NULL;
//     }
// };
// int main()
// {
//     Node *head = NULL;
//     int arr[] = {1, 2, 3, 4};
//     for (int i = 0; i < 4; i++)
//     {     //if linked list empty
//         if (head == NULL)
//         {
//             head = new Node(arr[i]);
//         }
//     //if exist krti ho
//         else
//         {
//             Node *tail = head;
//             while (tail->next != NULL)
//             {
//                 tail = tail->next;
//             }
//             // Node *temp = new Node(arr[i]);
//             // temp->next = temp;
//             tail->next = new Node(arr[i]);
//         }
//     }
// }

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
// optimize code
int main() {
    Node *head = NULL;
    Node *tail = NULL;

    int arr[] = {1, 2, 3, 4};
    
    // Create the linked list
    for (int i = 0; i < 4; i++) {
        if (head == NULL) {
            head = new Node(arr[i]);
            tail = head;
        }
        else {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
    }

    // Print the linked list
    Node *temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}