#include <iostream>

using namespace std;

int main()
{
    double x {47.4532};
    int y=static_cast<int>(x);
    int b=true;
    int c='a';

    cout<<"x= "<<x<<endl;
    cout<<"y= "<<y<<endl;
    cout<<"b= "<<b<<endl;
    cout<<"c= "<<c<<endl;

    return 0;
}