<<<<<<< HEAD
#include <iostream>
using namespace std;
int countVowel(string str, int index)
{
    if(index==-1){return 0;}
    if (str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u')
    {
        return 1+countVowel(str,index-1);
    }
    else{
        return countVowel(str,index-1);
    }
}
int main()
{
    string st = "kim taetae";
    cout << countVowel(st, 9);
=======
#include <iostream>
using namespace std;
int countVowel(string str, int index)
{
    if(index==-1){return 0;}
    if (str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u')
    {
        return 1+countVowel(str,index-1);
    }
    else{
        return countVowel(str,index-1);
    }
}
int main()
{
    string st = "kim taetae";
    cout << countVowel(st, 9);
>>>>>>> bcc2c6c010ae6b654bc28992ded3b7127f87e6b4
}