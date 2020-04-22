#include <iostream>
#include <cstdio>

using namespace std;

double calculateAverage(double a,double b, double c)
{
    a+=3;
    b+=4;
    c+=5;

    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"c: "<<c<<endl;

    return (a+b+c)/3;

}

int main()
{
    double x=5,y=10,z=15;

    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;
    cout<<"z: "<<z<<endl;

    double average=calculateAverage(x,y,z);

    cout<<"The average for the three values is: "<<average<<" ."<<endl;

    getchar();
    return 0;
}