#include <iostream>
#include <cstdio>

using namespace std;

double average(double a,double b,double c)
{
    return (a+b+c)/3;
}

double average(double a, double b, double c, double d)
{
    return (a+b+c+d)/4;
}

int main()
{
    double x,y,z,w;

    cout<<"Enter the three values:"<<endl;
    cin>>x>>y>>z;

    double avg= average(x,y,z);
    cout<<"average is: "<<avg<<endl;

    cout<<"Enter the fourth value"<<endl;
    cin>>w;
    
    avg=average(x,y,z,w);

    cout<<"average is: "<<avg<<endl;

    getchar();
    return 0;
}