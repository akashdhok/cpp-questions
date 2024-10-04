// WAP to display the sum of digit of a given number
#include <iostream>
using namespace std;
int main()
{
   int n , s = 0 ;
   cout<<"Enter a number :" <<"\n";
   cin>>n;
  while (n>0);
  {
   s = s+n%10;
   n = n/10; 
  }
  cout<<s<<"\n";

}