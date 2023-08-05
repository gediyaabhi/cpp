#include<iostream>
using namespace std;
class atm 
{
    public:
    int cb=10000,w;
    void withdraw() 
    {
        cout << "Enter a amount to withdraw:";
        cin >> w;

        if(w > cb)
        {
            cout << "insuffcient balace " << endl;
        }
       
    }

    void show()
    {
        cout << "hii.." << blc;
    }
   
};

int main ()
{
    atm a;
    int i,ch;
    cout << "enter a number : ";
    cin >> ch;


     do{
       // cout << " 1";
        switch (ch)
        {
            case 1:
            a.balance();
            break;

            case 2:
            a.show();
            cout << " htrt";
            break;

            case 3:
            // a.show();
            //cout << "brf ";
            break;

            default:
            cout << "Wrong number add";
            break; 
        }
    }
    while(ch==3);
   

}