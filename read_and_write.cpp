#include <iostream>

using namespace std;

int main()
{
    string name;
    int year;

    cout<<"Enter your name: ";
    cin>>name;

    cout<<"Enter your birth year:";
    cin>>year;

    cout<<name<<" you are "<<2020-year<<" old"<<endl;

    return 0;

}