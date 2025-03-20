#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>ST;
    ST.push(6);
    ST.push(16);
    ST.push(7);
    ST.push(9);

    ST.pop();

    cout<<ST.size()<<endl;
    //top
    cout<<ST.top()<<endl;
    cout<<ST.empty()<<endl;

    
}