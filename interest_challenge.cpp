#include <iostream>
using namespace std;

int main()
{
    double principal {500};
    double rate {.2};
    double time {5};
    double interest;

    interest=principal*rate*time;

    cout<<interest<<endl;

    return 0;
}