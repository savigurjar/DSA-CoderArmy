<<<<<<< HEAD
#include <iostream>
#include <algorithm>
using namespace std;
class Customer
{
    string name;
    int *data;

public:
    Customer()
    {
        cout << "const call"<<endl;
        name = "savi";
        data = new int;
        *data = 10;
        
    }
    //    destructor
    ~Customer()
    {
        delete data;
        cout<<"des is call";
    }
};
int main()
{
    Customer A1;
=======
#include <iostream>
#include <algorithm>
using namespace std;
class Customer
{
    string name;
    int *data;

public:
    Customer()
    {
        cout << "const call"<<endl;
        name = "savi";
        data = new int;
        *data = 10;
        
    }
    //    destructor
    ~Customer()
    {
        delete data;
        cout<<"des is call";
    }
};
int main()
{
    Customer A1;
>>>>>>> bcc2c6c010ae6b654bc28992ded3b7127f87e6b4
}