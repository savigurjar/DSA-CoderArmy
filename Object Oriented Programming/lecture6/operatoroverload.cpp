<<<<<<< HEAD
#include <iostream>
using namespace std;
class Complex
{
    int real, img;

public:
    Complex()
    {
    }
    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    void display()
    {
        cout << real << " +i" << img << endl;
    }
    Complex operator+(Complex &c)
    {
        Complex ans;
        ans.real = real + c.real;
        ans.img = img + c.img;
        return ans;
    }
};
int main()
{
    Complex C1(3, 4);
    Complex C2(4, 6);
    Complex c3 = C1 + C2;
    c3.display();
=======
#include <iostream>
using namespace std;
class Complex
{
    int real, img;

public:
    Complex()
    {
    }
    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    void display()
    {
        cout << real << " +i" << img << endl;
    }
    Complex operator+(Complex &c)
    {
        Complex ans;
        ans.real = real + c.real;
        ans.img = img + c.img;
        return ans;
    }
};
int main()
{
    Complex C1(3, 4);
    Complex C2(4, 6);
    Complex c3 = C1 + C2;
    c3.display();
>>>>>>> bcc2c6c010ae6b654bc28992ded3b7127f87e6b4
}