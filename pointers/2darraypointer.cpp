#include <iostream>
using namespace std;
int main()
{
    // array create krna h , jo addresses ko store krega
    int n, m; // n = row , m = col
    cin >> n >> m;

    int **ptr = new int *[n];
    // create 2d array
    for (int i = 0; i < n; i++)
    {
        ptr[i] = new int[m];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ptr[i][j];
        }
    }
    // print
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ptr[i][j] << " ";
            
        }
    }

    // realse memory
    for(int i=0;i<n;i++)
    {
        delete[] ptr[i];
    }
    delete[] ptr;
}