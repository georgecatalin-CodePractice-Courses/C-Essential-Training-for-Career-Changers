#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    int year;

    cout<<"Enter your year of birth and full name: "<<endl;
    cin>>year;
    cin.ignore();
    getline(cin,name);

    cout<<"Hello "<<name<<" you are "<<2020-year<<" old this year."<<endl;

    return 0;
}