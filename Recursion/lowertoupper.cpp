<<<<<<< HEAD
#include <iostream>
using namespace std;
void lowerToUpper(string &str,int index)
{
    if(index==-1){
        return;
    }
    str[index] = 'A'+str[index]-'a';
    lowerToUpper(str,index-1);
}
int main()
{
    string str = "ro";
    lowerToUpper(str,4);
    cout<<str;
=======
#include <iostream>
using namespace std;
void lowerToUpper(string &str,int index)
{
    if(index==-1){
        return;
    }
    str[index] = 'A'+str[index]-'a';
    lowerToUpper(str,index-1);
}
int main()
{
    string str = "ro";
    lowerToUpper(str,4);
    cout<<str;
>>>>>>> bcc2c6c010ae6b654bc28992ded3b7127f87e6b4
}