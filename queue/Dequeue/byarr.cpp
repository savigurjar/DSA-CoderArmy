#include <iostream>
using namespace std;
class Dequeue
{
public:
    int *arr;
    int front, rear, size;
    Dequeue(int n)
    {
        size = n;
        arr = new int[n];
        front = rear = -1;
    }
    bool IsEmpty()
    {
        return front == -1;
    }
    bool ISFull()
    {
        return (rear + 1) % size == front;
    }

    void push_front(int x)
    {
        // empty
        if (IsEmpty())
        {
            front = rear = 0;
            cout << "pushed " << x << " in front\n";
            arr[0] = x;
            return;
        }
        // full
        else if (ISFull())
        {
            cout << "Dequeue overflow\n";
            return;
        }
        // normal
        else
        {
            front = (front - 1 + size) % size;
            arr[front] = x;
            cout << "pushed " << x << " in front\n";
            return;
        }
    }
    void push_back(int x)
    {
        // empty
        if (IsEmpty())
        {
            front = rear = 0;
            cout << "pushed " << x << " in back\n";
            arr[0] = x;
            return;
        }
        // full
        else if (ISFull())
        {
            cout << "Dequeue overflow\n";
            return;
        }
        // normal
        else
        {
            rear = (rear + 1 + size) % size;
            arr[rear] = x;
            cout << "pushed " << x << " in back\n";
            return;
        }
    }

    void pop_front()
    {
        if (IsEmpty())
        {
            cout << "Dequeue underflow\n";
            return;
        }
        else
        {
            cout << "Popped " << arr[front] << " from dequeue\n";

            // single ele
            if (front == rear)
            {
                front = rear = -1;
            }
            // greater than 1 ele
            else
            {
                front = (front + 1) % size;
            }
        }
    }
    void pop_back()
    {
        if (IsEmpty())
        {
            cout << "Dequeue underflow\n";
            return;
        }
        else
        {
            cout << "Popped " << arr[rear] << " from dequeue\n";
            // single ele
            if (front == rear)
            {
                front = rear = -1;
            }
            // greater than 1 ele
            else
            {
                rear = (rear - 1 + size) % size;
            }
        }
    }

    int start()
    {
        if (IsEmpty())
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    int end()
    {
        if (IsEmpty())
        {
            return -1;
        }
        else
        {
            return arr[rear];
        }
    }
};
int main()
{
    Dequeue d(5);
    d.push_back(10);
    d.push_back(13);
    d.push_front(7);
    d.push_back(10);
    d.push_back(13);
    d.push_front(7);
    cout << "Front element: " << d.start() << endl;
    cout << "Rear element: " << d.end() << endl;
};