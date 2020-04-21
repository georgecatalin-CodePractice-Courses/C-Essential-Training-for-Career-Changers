#include <iostream>

using namespace std;

/*  **** This program is a little bank loan simulation *** */


int main()
{
    double balance, monthlyPayment;
    int months {0};

    cout<<"Hello, please type your balance: "<<endl;
    cin>>balance;

    cout<<"Enter the monthly payment you adhere to: "<<endl;
    cin>>monthlyPayment;

    while (balance>0)
    {
        balance-=monthlyPayment;
        months++;
    }
    
    cout<<"For the entered balance and the assumed monthy payment you will need "<<months<<" to complete your loan."<<endl;
    return 0;
}
