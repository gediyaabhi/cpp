#include<iostream>
using namespace std;
class report{
    int adno;
    char name[20];
    int mark,avarage;
    int a[5];
    public:
    int display()
    {
        cout <<"adno \tname \tgujarati \tmaths \tenglish \thindi \tscience \tmark \tavg"<<endl;
        cout <<adno;
        cout << "\t" <<name ;
        cout << "\t" <<a[0];
        cout << "\t\t" <<a[1];
        cout << "\t" <<a[2];
        cout << "\t\t" <<a[3];
        cout << "\t" <<a[4];
        cout << "\t\t" <<mark;
        cout << "\t" <<getavg();

    }

    int getavg ()
    {
        mark=a[0]+a[1]+a[2]+a[3]+a[4];
        avarage=mark/5;

        return avarage;

    }
    int readinfo()
    {

        cout <<"enter a adno";
        cin >> adno;

        cout << "enter a name";
        cin >> name;
        
       // cout << "enter a gujrati \tmaths \t english \thindi \tscience";
        cin >> a[0] >>a[1] >> a[2] >>a[3] >>a[4];

        
    }

};

int main ()
{
    report z;
    z.readinfo();
    z.getavg();
    z.display();
}