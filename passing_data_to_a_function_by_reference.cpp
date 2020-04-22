#include <iostream>
#include <cstdio>

using namespace std;

double getAverage(double& a, double& b, double& c) //passes the references(memory locations that corespond to a,b,c)
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
    double average=getAverage(x,y,z);

    cout<<"The average is: "<<average<<endl;
    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;
    cout<<"z: "<<z<<endl;


    getchar();
    return 0;
}