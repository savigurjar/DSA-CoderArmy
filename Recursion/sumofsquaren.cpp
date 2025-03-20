<<<<<<< HEAD
#include<iostream>
using namespace std;
int sqsum(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*n+sum(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<sqsum(n)<<endl;
=======
#include<iostream>
using namespace std;
int sqsum(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*n+sum(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<sqsum(n)<<endl;
>>>>>>> bcc2c6c010ae6b654bc28992ded3b7127f87e6b4
}