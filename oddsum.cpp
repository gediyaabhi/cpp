#include<iostream>
using namespace std;
int main()
{
    int i,t=0,n=20;
  
    
     for (i=1;i<=n;i+=2)
    {
        t=t+i;
        cout << i;

    }
    cout << "\n sum" << t;
}