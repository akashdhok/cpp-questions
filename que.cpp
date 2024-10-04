#include <iostream>
using namespace std;
int main()
{
    cout << "Enter physics marks :" << "\n";
    float phy;
    cin >> phy;
    cout << "Enter Chemistry marks :" << "\n";
    float chem;
    cin >> chem;
    cout << "Enter Maths marks :" << "\n";
    float math;
    cin >> math;
    int total = phy + chem + math;
    float percentage = total / 3;
    cout << "Total Percentage is : " << percentage << "\n";
    if (percentage >= 60 && percentage <= 100)
    {
        cout << "First Division" << "\n";
    }
    else if (percentage >= 50 && percentage <= 59)
    {
        cout << "Second Division" << "\n";
    }
    else if (percentage >= 40 && percentage <= 49)
    {
        cout << "Third Division" << "\n";
    }
    else
    {
        cout << "Fail" << "\n";
    }
}