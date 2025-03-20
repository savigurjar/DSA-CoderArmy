<<<<<<< HEAD
#include <iostream>
#include <vector>
using namespace std;
int subset(int arr[], int index, int n, int sum)
{
    if (index == n)
    {
        return sum == 0;
    }
    return subset(arr, index + 1, n, sum) + subset(arr, index + 1, n, sum - arr[index]);
}
int main()
{                                                                                                                                                                                                       
    int arr[] = {2, 5, 6, 1};
    int target = 8;
    cout << subset(arr, 0, 4, target);
=======
#include <iostream>
#include <vector>
using namespace std;
int subset(int arr[], int index, int n, int sum)
{
    if (index == n)
    {
        return sum == 0;
    }
    return subset(arr, index + 1, n, sum) + subset(arr, index + 1, n, sum - arr[index]);
}
int main()
{                                                                                                                                                                                                       
    int arr[] = {2, 5, 6, 1};
    int target = 8;
    cout << subset(arr, 0, 4, target);
>>>>>>> bcc2c6c010ae6b654bc28992ded3b7127f87e6b4
}