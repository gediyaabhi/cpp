#include<iostream>
using namespace std;
class box{
    int l,w,h;
    public:
    void setdata(int a, int b, int c){
        l=a , w=b ,h=c;
    }
    int getdata()
    {
        return l*w*h;
    }
    box operator+(box &n)
    {
        box t;
        t.l = l + n.l;
        t.w = w + n.w;
        t.h = h + n.h;

        return t;
    }
    
    box operator-(box &m)
    {
        box j;
        j.l = l - m.l;
        j.w = w - m.w;
        j.h = h - m.h;

        return j;
    }
};
int main()
{
    box a,b,c,x,d;
    a.setdata(5,5,5);
    cout << "Volume of A is :" << a.getdata() << endl;

    b.setdata(2,2,2);
    cout << "Volume of B is :" << b.getdata() << endl;

    d.setdata(3,3,3);
    cout << "Volume of D is :" << d.getdata() << endl;

    c=a+b;
    cout << "Volume of C is :" << c.getdata() <<endl;

    x=c-d;
    cout << "Volume of X is :" << x.getdata() <<endl;


}