#include <iostream>

using namespace std;

int main()
{
    string name;
    int year;

    cout<<"Enter your name";
    getline(cin,name);

    cout<<"Enter your birth year:";
    cin>>year;

    cout<<"Hello "<<name<<" you are "<<2020-year<<" old";

    return 0;
}