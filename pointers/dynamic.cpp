#include <iostream>
using namespace std;
int main()
{
    // variable ke liye memory allocation
    // dynamic memory allocation
    int *ptr = new int;
    *ptr = 5;
    cout << *ptr << endl;

    // float
    float *ptr1 = new float;
    *ptr1 = 5.6;
    cout << *ptr1 << endl;

    // user
    int n;
    cout << "enter the size of array :";
    cin >> n;
    int *p = new int[n];
    //    value dalo
    for (int i = 0; i < n; i++)
    {
        p[i] = i + 1;
    }
    //    print kro
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << endl;
    }

    // delete keyword
    delete ptr;
    delete[] p;
}