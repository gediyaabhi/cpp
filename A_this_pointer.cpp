#include<iostream>
using namespace std;
class bank
{
    int bal;
    string type;
    string name;
    public:

    void setdata(int bal,string name,string type)
    {
        this->bal=bal;
        this->name=name;
        this->type=type;
    }

    void getdata()
    {
        cout << "Account Holder name is : " << name << endl;
        cout << "Account Type is : " << type << endl;
        cout << "Account Balance is :" << bal << endl;
    }
};

int main ()
{
    bank b;
    b.setdata(1000,"hello","savling");
    b.getdata();
}