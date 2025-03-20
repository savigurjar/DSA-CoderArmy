<<<<<<< HEAD
#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n+sum(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
=======
#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n+sum(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
>>>>>>> bcc2c6c010ae6b654bc28992ded3b7127f87e6b4
}