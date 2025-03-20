<<<<<<< HEAD
#include <iostream>
#include <vector>
using namespace std;
void subSequence(int arr[], int index, int n, vector<vector<int>> &ans, vector<int> temp)
{

    if (index == n)
    {
        ans.push_back(temp);
        return;
    }
    // not included
    subSequence(arr, index + 1, n, ans, temp);
    temp.push_back(arr[index]);
    // includede
    subSequence(arr, index + 1, n, ans, temp);
}
int main()
{
    int arr[] = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> temp;
    subSequence(arr, 0, 3,ans, temp);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout<<endl;
    }
=======
#include <iostream>
#include <vector>
using namespace std;
void subSequence(int arr[], int index, int n, vector<vector<int>> &ans, vector<int> temp)
{

    if (index == n)
    {
        ans.push_back(temp);
        return;
    }
    // not included
    subSequence(arr, index + 1, n, ans, temp);
    temp.push_back(arr[index]);
    // includede
    subSequence(arr, index + 1, n, ans, temp);
}
int main()
{
    int arr[] = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> temp;
    subSequence(arr, 0, 3,ans, temp);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout<<endl;
    }
>>>>>>> bcc2c6c010ae6b654bc28992ded3b7127f87e6b4
}