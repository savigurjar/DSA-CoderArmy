#include <iostream>
using namespace std;
/*
// ex1
void fun(int *p1)
{
    *p1 = *p1+5;
}
int main()
{
int n = 10;
int *p = &n;
fun(p);
cout<<n;
cout<<p;
}*/

/*
// example 2 
void fun(int *p1)
{
    p1++;
}
int main()
{
    int n = 10;
    int *p = &n;
    fun(p);
    cout << p << endl;
    cout << *p;
}
*/

/*
// example 3 
void fun(int **p1)
{
    *p1 = *p1+1;
}
int main()
{
    int n = 10;
    int *p = &n;
    int **ptr = &p;
    fun(ptr);
    cout << p << endl;
    cout << *p;
}
*/

/*
// example 4 and hw
// using refrence
void fun(int &n1)
{
    n1 = n1+5;
}
int main()
{
    int n = 10;
    fun(n);
    cout<<n;
}
*/

// best example
void fun(int &v)
{
    v = v+12;
}
void fun_ptr(int *p1)
{
    *p1 = *p1+7;
}
void fun_dptr(int **p2)
{
    **p2 = **p2+3;
} 
int main()
{
    int v = 30;

    fun(v);
    cout<<"using reference "<<v<<endl;

    int *p = &v;
    fun_ptr(p);
    cout<<"using pointer "<<v<<endl;

    int **ptr = &p;
    fun_dptr(ptr);
    cout<<"using double pointer "<<v<<endl;

    return 0;
}