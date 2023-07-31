#include<iostream>
using namespace std;
class area{
    public:
    area(double r){
        cout <<"area of circle" <<3.14*r*r <<endl;
    }
    area(int l)
    {
        cout << "Area of square" <<l*l <<endl ;
       
    }
    area (int l,int b){
        cout << "Area of rectangle  :" << l*b << endl;
    }
    area (int a,int b,int h){
        cout << "Area of triangle : " << 2/b*h << endl;
    }
};
int main(){
    area r(2),b(3.1),l(20),lb(20,5),bh(2,10,8);
}
