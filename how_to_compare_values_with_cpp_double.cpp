#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x{.7};

    if (abs(x-.7)<.001)
    {
        cout<<"The numbers are equal."<<endl;
    }
    else
    {
        cout<<"The numbers are not equal.";
        cout<<x;
    }
    
    return 0;
}
