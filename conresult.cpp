#include<iostream>
using namespace std;
class result{
    int admno;
    char sname[20];
    int eng,maths,sci,total;     
    public:
    result (){
        cout <<" enter a admno :"<< endl;
        cin >> admno;

        cout << "enter a student name :" << endl;
        cin >> sname;

        cout << "enter a english mark :" << endl;
        cin >> eng;

        cout << " enter a maths mark :" << endl;
        cin >> maths;

        cout << "enter a science mark : " << endl;
        cin >> sci;

        total=eng+maths+sci;
}
    int display(){
        cout << "admno \tname \teng \tmath \tsci \ttotal "<<endl;
        cout << admno <<"\t" << sname  <<"\t" << eng  <<"\t" <<maths  <<"\t" <<sci  <<"\t" <<total;
    }
};

int main ()
{
    result x;
    x.display();
}