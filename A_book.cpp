#include<iostream>
using namespace std;
class book {
    
    int bno;
    char btitle[30];
    int price,n,x;
    public:
    int display()
    {
        cout << "bookno \tbooktitle \tprice \tcoppies \ttotalcost "<<endl;
        cout <<bno;
        cout <<"\t"<<btitle;
        cout <<"\t\t"<<price;
        cout <<"\t"<<n;
        cout <<"\t\t"<<totalcost();

    }

    int totalcost()
    {
        return price*n;
    }

    int purchase ()
    {
        cout << "enter coppies ";
        cin >>n;
    }


    int input()
    {
        cout << "enter a book no";
        cin  >> bno;

        cout << "enter a book title";
        cin >>btitle;

        cout << "enter a price";
        cin >>price;

        //cout << "enter a n";
        //cin >> n;

    }
};

int main ()
{
    book z;
    z.input();
    z.purchase();
    z.totalcost();
    z.display();
}
