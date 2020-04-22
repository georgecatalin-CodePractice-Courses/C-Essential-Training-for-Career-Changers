#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    string seasons[4]={"spring","summer","fall","winter"};
    int numbers[10];

    for (int i = 0; i < 10; i++)
    {
        cout<<"Enter a number: \t";
        cin>>numbers[i];
    }
    
    int min=numbers[0];

    for (int i = 1; i < 10; i++)
    {
        if (numbers[i]<min)
        {
            min=numbers[i];
        }
        
    }
    
    cout<<"Minimum number is "<<min<<endl;

    getchar();
    return 0;
}