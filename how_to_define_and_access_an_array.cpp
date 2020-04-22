#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    string seasons[4]={"spring","summer","autumn","winter"};
    int numbers[10];

    for (int i = 0; i < 10; i++)
    {
        cout<<"Enter a number: ";
        cin>>numbers[i];
    }
    
    for (int i = 0; i < 10; i++)
    {
        cout<<numbers[i]<<" ";
    }
    

    getchar();
    return 0;
}