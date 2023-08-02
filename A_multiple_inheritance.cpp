#include<iostream>
using namespace std;
class base1
{
    protected:
    int a ;
    public:
    void setA()
    {
        cout << "Enter A :";
        cin >> a;
    }
};

class base2
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

class derived : public base1, protected base2
{
    public:
    void product()
    {
        base2 :: setB();
        cout << "Product of A and B  is : " << a*b << endl;
    }
};

int main ()
{
    derived d;
    d.setA();
    d.product();
}