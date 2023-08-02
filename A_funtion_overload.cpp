// function overloading
#include<iostream>
using namespace std;
class hello{
    public:
    void test(int a)
    {
        cout <<"square is a :" << a*a <<endl;
    }
    void test(double a)
    {
        cout << "cube is a : "<<a*a*a << endl;
    }
    void test (int a, int b)
    {
        cout <<"product is a :" <<a*b << endl;
    }
    void test (int a,int b,int c)
    {
        cout <<"Addition is a,b and c :" <<a+b+c <<endl; 
    }
};
int main(){
    hello h;
    h.test(10);
    h.test(1.5);
    h.test(10,20,30);
    
}
