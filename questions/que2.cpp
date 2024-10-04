// WAP to display the reverse of given number
#include<iostream>
using namespace std;
int main()
{
    int n , r = 0 , s = 0;
    cout<<"Enter a number = "<<"\n";
    cin>>n;
    while(n>0)
    {
        r = r*10 + n%10;
         n = n/10;
    }
   cout<<r<<"\n";
}