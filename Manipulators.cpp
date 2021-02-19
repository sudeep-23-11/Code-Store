//Manipulators
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x=10, y=100, z=1000;
    cout<<setw(4)<<x<<endl;
    cout<<setw(4)<<y<<endl;
    cout<<setw(4)<<z<<endl;
    float a=156.156, b=50.005, c=8797e-5;
    cout<<setprecision(4);
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    return 0;
}