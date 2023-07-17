#include<iostream>
using namespace std;
class student {
    int admno;
    char sname[20];
    float eng,math,sci,total;
    public:
    void ctotal ()
    {
        //cout << eng <<endl;
        total=eng+math+sci;
       
    }
    void showdata()
    {
        cout << "admno \t name \tenglish maths \tscience total"<<endl;
        cout << admno;
        cout <<"\t" << sname;
        cout <<"\t" << eng;
        cout <<"\t" << math;
        cout <<"\t" << sci; 
        cout <<"\t" << total;
    }
    void tackdata()
    {
        cout << " enter a admno";
        cin >> admno;
        cout << "enter a name "; 
        cin >> sname;
        cout<< "enter english mark ";
        cin >> eng;
        cout<< "enter maths mark ";
        cin >> math;
        cout<< "enter science mark ";
        cin >> sci;
    }
};

int main ()
{
    student z;
    z.tackdata();
    z.ctotal();
    z.showdata();
}
