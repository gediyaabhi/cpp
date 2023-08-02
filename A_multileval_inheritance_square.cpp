#include<iostream>
using namespace std;
class base
{
    protected:
    int n;
    public:
    void setn()
    {
        cout << "Enter Value of N :" << endl;
        cin >> n;
    }

};
class derived : public base
{
    int i;
    public:
    void getdata()
    {
        for(i=1;i<=n;i++)
        {
            cout << (i*i) << "\t";
        }
    }
};

int main ()
{
    derived d;
    d.setn();
    d.getdata();

}