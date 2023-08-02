#include<iostream>
using namespace std;
class volume{
    public:
    volume(int l,int w, int h){
        cout <<"volume of Rectangular Solid or Cuboid :"<<l*w*h <<endl ; 
    }
    volume (int a){
        cout <<"volume of cube :" << a*a*a <<endl ;
    }
    volume(double a,int r,int h){
        cout <<"volume of cylinder :" << 3.14*r*h <<endl;
    }
    volume (int b,int h)
    {
        cout<<"volume of prism :" << b*h <<endl;
    }
};
int main(){
    volume iwh(10,20,15),cube(4),cylinder(3.14,5,9),prism(10,5);
}
