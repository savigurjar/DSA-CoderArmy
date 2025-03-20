<<<<<<< HEAD
#include <iostream>
using namespace std;
void revString(string &str,int start,int end)
{
    if(start>=end){return;}

    char c = str[start];
    str[start] = str[end];
    str[end] = c;

    revString(str,start+1,end-1);
}
int main()
{
    string st = "Aarigato";
    revString(st,0,6);
    cout<<st<<endl;
=======
#include <iostream>
using namespace std;
void revString(string &str,int start,int end)
{
    if(start>=end){return;}

    char c = str[start];
    str[start] = str[end];
    str[end] = c;

    revString(str,start+1,end-1);
}
int main()
{
    string st = "Aarigato";
    revString(st,0,6);
    cout<<st<<endl;
>>>>>>> bcc2c6c010ae6b654bc28992ded3b7127f87e6b4
}