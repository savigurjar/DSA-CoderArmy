#include <iostream>
using namespace std;

// static
// class NODE{
//     public:
//     int data;
//     NODE *next;
// };
// int main(){
//     NODE A1;
//     A1.data = 4;
//     A1.next = NULL;

// }

// dynamic
// class Node
// {
// public:
//     int data;
//     Node *next;
// };
// int main()
// {
//     Node *head;
//     head = new Node();
//     head->data = 4;
//     head->next = NULL;
// }

// using constructor
class Node{
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
    Node *head;
    head = new Node(7);
}