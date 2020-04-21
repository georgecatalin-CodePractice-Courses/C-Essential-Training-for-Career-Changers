#include <iostream>

using namespace std;

int main()
{
    string input;
    cout<<"Enter the name of the first student:"<<endl;
    cin>>input;

    while (input!="q")
    {
        cout<<"You entered "<<input<<" Enter the next student."<<endl;
        cin>>input;
    }
    return 0;
    
}