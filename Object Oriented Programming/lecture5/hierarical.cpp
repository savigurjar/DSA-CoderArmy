<<<<<<< HEAD
#include <iostream>
using namespace std;
class Human
{
protected:
    string name;
    int age;

public:
    void work()
    {
        cout << "i am working \n";
    }
};
class Student : public Human
{
    int roll_num, fees;

public:
    Student(string name, int age, int roll_num, int fees)
    {
        this->name = name;
        this->age = age;
        this->roll_num = roll_num;
        this->fees = fees;
    }
    void display()
    {
        cout << "yo!! " << name << " age is " << age << " and your roll number is " << roll_num << " and your fees is " << fees << endl;
    }
};
class Teacher : public Human
{
    int salary;

public:
    Teacher(int salary, string name, int age)
    {
        this->salary = salary;
        this->name = name;
        this->age = age;
    }
    void display()
    {
        cout << "hi!! " << name << " age is " << age << " salary is " << salary << endl;
    }
};
int main()
{
    Student A1("Savi", 21, 304, 80000);
    // A1.work();
    A1.display();
    Teacher A2(30, "tae", 29);
    A2.display();
=======
#include <iostream>
using namespace std;
class Human
{
protected:
    string name;
    int age;

public:
    void work()
    {
        cout << "i am working \n";
    }
};
class Student : public Human
{
    int roll_num, fees;

public:
    Student(string name, int age, int roll_num, int fees)
    {
        this->name = name;
        this->age = age;
        this->roll_num = roll_num;
        this->fees = fees;
    }
    void display()
    {
        cout << "yo!! " << name << " age is " << age << " and your roll number is " << roll_num << " and your fees is " << fees << endl;
    }
};
class Teacher : public Human
{
    int salary;

public:
    Teacher(int salary, string name, int age)
    {
        this->salary = salary;
        this->name = name;
        this->age = age;
    }
    void display()
    {
        cout << "hi!! " << name << " age is " << age << " salary is " << salary << endl;
    }
};
int main()
{
    Student A1("Savi", 21, 304, 80000);
    // A1.work();
    A1.display();
    Teacher A2(30, "tae", 29);
    A2.display();
>>>>>>> bcc2c6c010ae6b654bc28992ded3b7127f87e6b4
}