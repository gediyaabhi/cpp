#include<iostream>
using namespace std;
class box{
    int l,w,h;
    public:
    void setdata(int a, int b, int c)
    {
        l=a, w=b, h=c;
    } 
    int getdata()
    {
        return l*w*h;
    }
    box operator+(box &n)
    {
        box t;
        t.l= l + n.l;
        t.w= w + n.w;
        t.h= h + n.h;
        return t;
    }
};
int main()
{
    box a,b,c;
    a.setdata(2,2,2);
    cout << "Volume of box A is :" << a.getdata()<<endl;

    b.setdata(3,3,3);
    cout << "Volume of box B is :" << b.getdata() <<endl;

    c=a+b;

    cout << "Volume of box C is :" << c.getdata() <<endl;
}
