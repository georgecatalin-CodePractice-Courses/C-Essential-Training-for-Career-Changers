#include <iostream>
#include <string>

using namespace std;

int calculatePayOffMonths(double balance,double monthlyPayment)
{
    int months {0};
    while (balance>0)
    {
        balance-=monthlyPayment;
        months++;
    }
    
    return months;
}

int main()
{
    double myBalance, myMonthlyPayment;

    cout<<"Enter your balance:"<<endl;
    cin>>myBalance;

    cout<<"Enter your monthly payment"<<endl;
    cin>>myMonthlyPayment;

    cout<<"You need "<<calculatePayOffMonths(myBalance,myMonthlyPayment)<<"months to pay the loan."<<endl;
    return 0;
}