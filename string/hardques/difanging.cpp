<<<<<<< HEAD
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
string defangIPaddr(string addr)
{
    string ans;
    int index = 0;
    while(index<addr.size())
    {
        if(addr[index]=='.')
        {
            ans += "[.]";
        }
        else{
            ans += addr[index];
        }
        index++;
    }
    return ans;
}
int main()
{
string address;
cout<<"enter IP address ";
cin>>address;

string defangeAddress = defangIPaddr(address);
cout<<"defang IP address is "<<defangeAddress<<endl;

return 0;
=======
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
string defangIPaddr(string addr)
{
    string ans;
    int index = 0;
    while(index<addr.size())
    {
        if(addr[index]=='.')
        {
            ans += "[.]";
        }
        else{
            ans += addr[index];
        }
        index++;
    }
    return ans;
}
int main()
{
string address;
cout<<"enter IP address ";
cin>>address;

string defangeAddress = defangIPaddr(address);
cout<<"defang IP address is "<<defangeAddress<<endl;

return 0;
>>>>>>> bcc2c6c010ae6b654bc28992ded3b7127f87e6b4
}