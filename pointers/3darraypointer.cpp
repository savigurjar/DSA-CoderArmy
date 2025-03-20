#include <iostream>
using namespace std;

int main()
{
    int l, b, h;
    cin >> l >> b >> h;

    // Allocate 3D array
    int ***ptr = new int **[l];
    for (int i = 0; i < l; i++)
    {
        ptr[i] = new int *[b];
        for (int j = 0; j < b; j++)
        {
            ptr[i][j] = new int[h];
        }
    }

    // Initialize the 3D array
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < h; k++)
            {
                ptr[i][j][k] = i + j + k;
            }
        }
    }

    // Print the 3D array
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < h; k++)
            {
                cout << ptr[i][j][k] << " ";
            }
        }
    }
    cout << endl;

    // Properly release memory
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < b; j++)
        {
            delete[] ptr[i][j]; // Delete innermost arrays
        }
        delete[] ptr[i]; // Delete 2D arrays
    }
    delete[] ptr; // Delete outermost array

    return 0;
}
