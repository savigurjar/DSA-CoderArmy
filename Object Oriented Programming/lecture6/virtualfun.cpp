<<<<<<< HEAD
#include <iostream>
using namespace std;
class Animal{
    public:
   virtual void speak()
    {
        cout<<"huhu";
    }
};
class  Dog :  public Animal{
    public:
    void speak()
    {
        cout<<"Bark \n";
    }
};
int main()
{
    Animal *p;
    p = new Dog();
    p->speak();
}
=======
#include <iostream>
using namespace std;
class Animal{
    public:
   virtual void speak()
    {
        cout<<"huhu";
    }
};
class  Dog :  public Animal{
    public:
    void speak()
    {
        cout<<"Bark \n";
    }
};
int main()
{
    Animal *p;
    p = new Dog();
    p->speak();
}
>>>>>>> bcc2c6c010ae6b654bc28992ded3b7127f87e6b4
