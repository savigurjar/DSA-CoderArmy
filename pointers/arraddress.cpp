#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    /*
    //print the address of first element
    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr<<endl;

    // print the address of second element or 1st index
    cout<<arr+1<<endl;
    cout<<arr+1<<endl;
    cout<<&arr[1]<<endl;

    //print the value
    cout<<arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<*(arr+0)<<endl;
    cout<<*ptr<<endl;

    // all addresses print
    for(int i=0;i<5;i++)
    {
        cout<<arr+i<<endl;

    }

     // all value print
    for(int i=0;i<5;i++)
    {

        cout<<*(arr+i)<<endl;
    }


    // print all the value
    for (int i = 0; i < 5; i++)
    {
        cout << ptr[i] << " ";
    }

    // print all the address
    for (int i = 0; i < 5; i++)
    {
        cout << ptr + i << endl;
    }

    // arithmatic operation ptr++;ptr--,ptr=ptr+1
    // print all the value
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }

    cout << endl;
    // print all the value decreasing order
    for (int i = 5; i >= 0; i--)
    {
        cout << *ptr << " ";
        ptr--;
    }

    // addition
    ptr = ptr+3;
    cout<<*ptr;
    */

    char ar[5] = "1234";
    char *pt = ar;
    cout<<ar<<endl;
    cout<<ar+0<<endl;
    cout<<&ar[0]<<endl;
    cout<<*pt<<endl;

   

    
}