<<<<<<< HEAD
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int partition(int arr[], int start, int end)
{
    int pos = start;
    for (int i = start; i <= end; i++)
    {
        if (arr[i] <= end)
        {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    return pos-1;
}
void quicksort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int pivot = partition(arr, start, end);
    // left side
    quicksort(arr, start, pivot - 1);
    // right side
    quicksort(arr, pivot, end);
}
int main()
{
    int arr[] = {10, 3, 4, 1, 5, 6, 3, 2, 11, 9};
    quicksort(arr, 0, 9);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
=======
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int partition(int arr[], int start, int end)
{
    int pos = start;
    for (int i = start; i <= end; i++)
    {
        if (arr[i] <= end)
        {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    return pos-1;
}
void quicksort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int pivot = partition(arr, start, end);
    // left side
    quicksort(arr, start, pivot - 1);
    // right side
    quicksort(arr, pivot, end);
}
int main()
{
    int arr[] = {10, 3, 4, 1, 5, 6, 3, 2, 11, 9};
    quicksort(arr, 0, 9);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
>>>>>>> bcc2c6c010ae6b654bc28992ded3b7127f87e6b4
}