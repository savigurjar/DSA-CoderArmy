#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
class Stack
{
public:
    Node *top;
    int size; // actual size of stack

public:
    Stack()
    {
        top = NULL;
        size = 0;
    }

    // push
    void push(int value)
    {
        Node *temp = new Node(value);
        if (temp == NULL)
        {
            cout << "Stack overflow\n";
            return;
        }
        else
        {
            temp->next = top;
            top = temp;
            size++;
            cout << "Pushed  " << value << " into the stack\n ";
        }
    }
    // pop
    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack underflow\n";
            return;
        }
        else
        {
            Node *temp = top;
            cout << "popped " << top->data << " from the stack\n";
            top = top->next;
            delete temp;
            size--;
        }
    }
    // peek

    int peek()
    {
        if (top == NULL)
        {
            cout << "Stack is empty\n";
            return -1;
        }
        else
        {
            return top->data;
        }
    }
    // IsEmpty
    bool IsEmpty()
    {
        return top == NULL;
    }
    // IsSize
    int IsSize()
    {
        return size;
    }
};
int main()
{
    Stack T;
    T.push(6);
    T.push(9);
    T.push(7);
    T.push(4);
    T.push(7);

    T.pop();

    cout << "Top element: " << T.peek() << endl;
    cout << "Stack size: " << T.IsSize() << endl;
    cout << "Is stack empty? " << (T.IsEmpty() ? "Yes" : "No") << endl;
}