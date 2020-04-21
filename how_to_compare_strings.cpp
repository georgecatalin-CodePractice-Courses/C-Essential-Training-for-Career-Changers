#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1,s2;

    cout<<"Enter two words: "<<endl;
    cin>>s1;
    cin>>s2;

    if (s1.compare(s2)<0)
    {
        cout<<s1<<" ,"<<s2<<endl;
    }
    else
    {
        cout<<s2<<" ,"<<s1<<endl;
    }
    
    return 0;
}
