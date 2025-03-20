

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));

    // Input elements into the 2D array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Find and print max and min for each row
    for (int i = 0; i < n; i++)
    {
        int maxi = INT16_MIN; // Reset for each row
        int mini = INT16_MAX; // Reset for each row

        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] > maxi)
            {
                maxi = arr[i][j];
            }
            if (arr[i][j] < mini)
            {
                mini = arr[i][j];
            }
        }

        // Output the max and min for the current row
        cout << "Row " << i + 1 << " - Max element: " << maxi << ", Min element: " << mini << endl;
    }

    return 0;
}
