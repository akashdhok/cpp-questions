#include<iostream>
using namespace std;
int main()
{
    int i=1,n,even=0;
    cout<<"Enter last value:" << "\n";
    cin>>n;
    cout<<"Even numbers:" << "\n";
    while(i<=n)
    {
        if(i%2==0)
        {
            cout<<"\n"<<i;
            even++;
        }
        i++;
    }
    return 0;
}