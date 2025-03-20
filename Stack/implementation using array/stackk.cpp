#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int size;
    int top;

    // constructor
public:
    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
    }
    // operation functions
    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "stack overflow";
            return;
        }
        else
        {
            top++;
            arr[top] = value;
            cout << "Pushed " << value << " onto the stack\n";
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "stack underflow";
            return;
        }
        else
        {
            cout<<"popped " << arr[top] <<" from the stack\n";
            top--;
            // cout<<"popped"<<arr[top+1]<<"from the stack\n";
        }
    }

    int peek()
    { 
        if(top==-1)
        {
            cout<<"Stack is empty\n";
            return -1;
        }
        else{
            return arr[top];
        }
    }
    bool IsEmpty()
    {
        return top==-1; //it will true and return 1
    }
    int IsSize()
    {
       return top+1;
    }
};
int main()
{
    Stack T(5);
    T.push(7);
    T.push(12);
    T.push(30);
    T.push(3);


    T.pop();
    // T.pop();
    // T.pop();
    // T.pop();
    // T.pop();

    cout<<T.peek()<<endl;

    cout<<T.IsEmpty()<<endl;

    cout<<T.IsSize()<<endl;
}