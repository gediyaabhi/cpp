#include<iostream>
using namespace std;
class volume{
    public:
    void vlm(int l, int w, int h)
    {
       cout <<"volume of Rectangular Solid or Cuboid :"<<l*w*h <<endl; 
    }
    void vlm(int a)
    {
        cout <<"volume of cube :" << a*a*a <<endl;
    }
    void vlm (double a ,int r, int h)
    {
        cout <<"volume of cylinder :" << 3.14*r*h <<endl;
    }
    void vlm(int b ,int h)
    
    {
        cout<<"volume of prism :" << b*h <<endl;
    }
};
int main(){
    volume x;
    x.vlm(10,20,30);
    x.vlm(20);
    x.vlm(3.14,10,5);
    x.vlm(50,60);
}
