#include<iostream>
using namespace std;
class hello
{
    int m,s,g,t,per;
    public:
    void setdata()
    {
        cout <<"Enter maths mark: ";
        cin >> m;

        cout << "Enter science mark:";
        cin >>s;

        cout << "Enter gujrati mark:";
        cin >>g;
    }
    void calc()
    {
        t=m+s+g;
        per=t/3;
    }
    void getdata()
    {
        cout <<m <<"\t"<<s <<"\t"<<g <<"\t" <<t <<"\t" <<per <<endl;  
    }
};
int main ()
{
    hello a[5];
    int i;
    for(i=0;i<2;i++)
    {
        a[i].setdata();
    }

    for(i=0;i<2;i++)
    {
        a[i].calc();
    }
    
    cout << "maths \tscience gujrati total \tper"<<endl;
    
    for(i=0;i<2;i++)
    {
        a[i].getdata();
    }
}
