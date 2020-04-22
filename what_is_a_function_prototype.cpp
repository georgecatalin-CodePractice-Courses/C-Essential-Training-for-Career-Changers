#include <iostream>

using namespace std;

double principal {0};
double rate {0};
int time {0};

void getDataFromUser();
double getInterestAmount();

int main()
{
    double interest;
    getDataFromUser();

    interest=getInterestAmount();
    cout<<"The interest at the end of the period is :"<<interest<<endl;

    return 0;
}

void getDataFromUser()
{
    cout<<"Enter the principal value of the deposit: "<<endl;
    cin>>principal;

    cout<<"Enter the rate (.99):"<<endl;
    cin>>rate;

    cout<<"Enter the time:"<<endl;
    cin>>time;
}

double getInterestAmount()
{
    double interest=principal*rate*time;
    return interest;
}