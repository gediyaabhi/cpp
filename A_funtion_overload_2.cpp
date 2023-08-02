#include<iostream>
using namespace std;
class hello{
    public:
    void area (int l)
    {
        cout <<"Area of square :" << l*l <<endl; 
    }
    void area(double r)
    {
        cout <<"Area of circle :" << 3.14*r*r <<endl;
    }
    void area(int l, int b)
    {
        cout << "Area of rectangle :" <<l*b <<endl;
    }
};
int main ()
{
    hello x;
    x.area(10);
    x.area(1.5);
    x.area(10,20);

}
