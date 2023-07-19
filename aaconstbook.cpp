#include<iostream>
using namespace std;
class book{
    int bno;
    char btitle[20];
    int price,coppies,totalcost;
    public:

    book(){
        cout <<"enter a book no ::";
        cin >> bno;

        cout << "enter a book name ::";
        cin >> btitle;

        cout << "enter a price ::";
        cin >>price;

        cout << "enter a coppies ::";
        cin >>coppies;

    } 
    int display()
    {
        totalcost=price*coppies;
        cout <<"bno \tbname \tprice \tcoppies \ttotalcost "<<endl;
        cout <<bno  <<"\t"<<btitle  <<"\t" <<price  <<"\t"<<coppies  <<"\t"<<totalcost;

    }
};
int main()
{
    book a;
    a.display();
}