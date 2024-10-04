#include <iostream>
using namespace std;
int main() {
int n ,i = 1;
bool f = false;
cout<<"Enter a number " <<"\n";
cin>>n;
do
{
    if(i*i==n){
       f=true;
       break;
    }
     i++;
} while (i<=n);
if(f==true){
    cout<<"Valid square = " << i <<"\n";
}
else{
    cout<<"not valid";
}
}
