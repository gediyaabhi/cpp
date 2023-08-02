#include<iostream>
using namespace std;
class base 
{
    protected:
    int n;
    public:
    void setn()
    {
        cout << "Enter N:";
        cin >> n;
    }
};
class derived : public base
{
    public:
    int a=1,i;
    void getdata()
    {
        for(i=1;i<=n;i++)
        {
            a=a*i;
            cout <<"Factorial of " << n <<"is:" << a << endl;
        }
    }
};

int main ()
{
    derived d;
    d.setn();
    d.getdata();
}