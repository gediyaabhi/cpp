#include<iostream>
using namespace std;
class test{
    public:
    test (){
        cout << "defualt constructor is called...."<<endl;
    }
    test(int a ){
        cout << "value of a is :" <<a <<endl;
    }
    test(char x){
        cout << "char of x is :" <<x <<endl;
    }
    test (int a, int b){
        cout << "product of a and b is " << a*b << endl;
    }
    test(int a, int b,int c){
        cout <<"addition of a,b and c is " <<a+b+c << endl;
    }
    ~test(){
        cout<<"destructor is called...." << endl;
    }
};

int main ()
{
    test t,a(1,2,3),b('A'),c(10),x(2,50);
}
