#include<iostream>
using namespace std;
int main()
{
    int i,t=0,n;
    
    cout << "enter a value  ";
    cin>>n;
    for(i=0;i<n;i+=2)
    {
        t=t+i;
        cout << " " << i;

    }
    cout << "\n sum :" << t;
}