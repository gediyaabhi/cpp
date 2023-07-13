#include<iostream>
using namespace std;
int main()
{
    int guj,eng,maths,total,per;

    cout<<"enter a guj";
    cin>>guj;

    cout<<"enter a eng";
    cin>>eng;

    cout<<"enter a maths";
    cin >> maths;

    total=guj+eng+maths;

    cout<<"total " << total;

    per=total/3;

    cout<<"\nper " << per;

    if(per>28)
            cout<<"\npass";
    else    
            cout<<"\nfail";


}