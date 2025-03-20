<<<<<<< HEAD
#include<iostream>
using namespace std; 
int pow(int num,int n)
{   if(n==0) return 1;
    if(n==1)
    {
        return num;
    }
    return num*pow(num,n-1);
}
int main()
{
     int n;
     cin>>n;
     cout<<pow(2,n)<<endl;
=======
#include<iostream>
using namespace std; 
int pow(int num,int n)
{   if(n==0) return 1;
    if(n==1)
    {
        return num;
    }
    return num*pow(num,n-1);
}
int main()
{
     int n;
     cin>>n;
     cout<<pow(2,n)<<endl;
>>>>>>> bcc2c6c010ae6b654bc28992ded3b7127f87e6b4
}