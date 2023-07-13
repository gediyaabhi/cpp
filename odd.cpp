#include<iostream>
using namespace std;
int main()
{
    int odd,n;

    cout<<"enter a value";
    cin>>n;

    for(odd=1;odd<=n;odd+=2)
    {
        cout<<"" << odd;
    }

}