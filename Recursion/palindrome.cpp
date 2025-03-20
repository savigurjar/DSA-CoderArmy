<<<<<<< HEAD
#include<iostream>
using namespace std;
bool checkPal(string str,int start,int end)
{    
    // base condition 
    if(start>=end)
    {
        return 1;
    }
    // not match 
    if(str[start] != str[end])
    {
        return 0;
    } // match 
    else
   
    return checkPal(str,start+1,end-1);
}
int main()
{
    string st = "naman";
    cout<<checkPal(st,0,4);
=======
#include<iostream>
using namespace std;
bool checkPal(string str,int start,int end)
{    
    // base condition 
    if(start>=end)
    {
        return 1;
    }
    // not match 
    if(str[start] != str[end])
    {
        return 0;
    } // match 
    else
   
    return checkPal(str,start+1,end-1);
}
int main()
{
    string st = "naman";
    cout<<checkPal(st,0,4);
>>>>>>> bcc2c6c010ae6b654bc28992ded3b7127f87e6b4
}