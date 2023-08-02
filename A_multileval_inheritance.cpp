#include<iostream>
using namespace std;
class base1{
    protected :
    int a;
    public:
    void setA()
    {
        cout << "Enter A: ";
        cin >> a;

    }
};
class test : public base1
{
    protected:
    int b;
    public:
    void setB()
    {
        cout << "Enter B :";
        cin >> b;
    }
};

class derived : public test
{
    public:
    void product()
    {
        cout << "Product of A and B is :" << a*b << endl;
    }
};

int main()
{
    derived d;
    d.setA();
    d.setB();
    d.product();
}