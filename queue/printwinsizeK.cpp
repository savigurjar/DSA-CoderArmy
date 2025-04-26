#include <iostream>
#include <queue>
using namespace std;
void display(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
int main()
{
    int arr[] = {2, 3, 1, 5, 6, 7, 8};
    int n = 7;
    int k = 3;

    queue<int> q;

    // Step 1: Push first k-1 elements
    for (int i = 0; i < k - 1; i++)
    {
        q.push(arr[i]);
    }

    // Step 2: For the rest, push, display, and pop one element
    for (int i = k - 1; i < n; i++)
    {
        q.push(arr[i]);
        display(q);
        q.pop();
    }

    return 0;
}