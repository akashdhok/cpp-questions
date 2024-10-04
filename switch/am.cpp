#include<iostream>
using namespace std;
int main(){
    int h , m;
    cout<<"enter hour(0-23)" <<"\n";
    cin>>h;
     cout<<"enter minute(0-60)" <<"\n";
    cin>>m;
    switch (h/12)
    {
    case 0:{
        cout<<"hour = " << h << ":" << m << "a.m." << "\n";
         break;
    }
    case 1:
   
        cout<<"hour = " << ((h-12)==0)?cout<<"a.m." :cout<<"p.m." << ":" << m << "p.m." << "\n";
        break;
    }
}