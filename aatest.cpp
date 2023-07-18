#include<iostream>
using namespace std;
class test{
    int tcode;
    char desription[50];
    int candidate;

    public:
    int schedule()
    {
        cout << "enter testcode :";
        cin >> tcode;
        
        cout << "enter desription :";
        cin >> desription;

        cout << "enter no of candidate";
        cin >> candidate;
        //cout << "enter no of candidate";
        //cin >> centerroad;
    }
    int centerreq ()
    {
        return (candidate/100)+1;
    }

    int display ()
    {
        cout << "testcode \tdesription \tcadidate \tcenter required " <<endl;

        cout<< tcode << "\t\t" << desription << "\t\t" << candidate << "\t" <<centerreq();


    }
};

int main ()
{
    test z;
    z.schedule();
    int x=z.centerreq();
    z.display();
}