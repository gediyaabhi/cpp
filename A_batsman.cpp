#include<iostream>
using namespace std;
class batsman {
    public:
    int bcode;
    char bname[20];
    int innings,notout,runs,batavg;
    int  calcavg()
    {
        return runs /(innings-notout);

    }
    void readdata()
    {
        cout << "enter bcode number";
        cin >>bcode;

        cout << "enter bname";
        cin >> bname;

        cout << "enter innings";
        cin >> innings;

        cout << "enter notout";
        cin >>notout;

        cout << "enter runs ";
        cin >>runs;
    }
    void displaydata()
    {
        cout << "bcode \tbname \tinnings notout \truns \tavg " << endl;
       cout << "\t" << bcode;
       cout << "\t" << bname;
       cout << "\t" << innings;
       cout << "\t" << notout;
       cout << "\t" << runs;
       cout << "\t" << calcavg();
    }
};

int main ()
{
    batsman z;
    z.readdata();
    z.calcavg();
    z.displaydata();
}
