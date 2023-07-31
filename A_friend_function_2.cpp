#include<iostream>
using namespace std;
class large
{
    int x,y;
    public:
    void setdata(int a , int b)
    {
        cin >> x >> y;
    }
    void getdata()
    {
        cout << "Number is  " << x << "\t" << y << endl;
    }
    friend large add(large);
};
large add(large p)
{
    large t;
    t.x=p.x;
    t.y=p.y;

    if(t.x > t.y)
    {
        cout << "A is big :" << t.x << endl; 
    }
    else {
        cout << "B is big :" <<t.y << endl;
    }
}
int main ()
{
    int a,b;
    large n;
    n.setdata(a,b);
    n.getdata();

    add(n);
}
