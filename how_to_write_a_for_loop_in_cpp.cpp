#include <iostream>

using namespace std;

/* *** This little program prints out the odd numbers from 1..100 *** */

int main()
{
    for (auto i = 1; i < 100; i++)
    {
        if (i%2!=0)
        {
            cout<<i<<"\t";  
        }   
    }   
    return 0;
}