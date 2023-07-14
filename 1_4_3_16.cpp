#include<iostream>
using namespace std ;

int main ()
{
    int i,j,n=10;
    for(i=0;i<=n;i++)
    {
        if(i%2!=0)
        {
            cout << i;
        }
        else  cout <<i*i;
    }
}