#include<iostream>
using namespace std;
class test {
    int m;
    public:
    test(){
        cout << "contructor is called...." << endl;
        cin >> m;
    }

    // test(){
    //      cout << "contructor is called m:"  <<endl;
    //      cin >> m;
    //  }
};

int main()
{
    test z;
}