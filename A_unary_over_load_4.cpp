#include<iostream>
using namespace std;
class number
{
    int real,img;
    public:
    void setdata(int a, int b)
    {
        real = a , img =b;
    }
    void getdata()
    {
        cout << "Number is : " << real << "-" << img << "i" << endl;
    }
    number operator--(int)
    {
        number t;
        t.real = real--;
        t.img = img--;
    }

};
int main()
{
    number n,m;
    n.setdata(3,5);
    n.getdata();
    
    n--;
    m=n;
    m.getdata();
}
