// ConsoleInputOutput
#include<iostream>
#include<iomanip>
#include<strstream>
using namespace std;
int main()
{
    ostrstream ft;
    int a=33, x; 
    float b=66.99, y; 
    char c='X', z;
    ft<<a<<" "<<b<<" "<<c<<ends;
    istrstream fp(ft.str());
    fp>>x>>y>>z;
    cout<<x<<" "<<y<<" "<<z<<endl;
    char ch, dh;
    char S1[100];
    cin.get(ch);
    cout<<ch<<endl;
    fflush(stdin);
    cin.putback('X');
    dh=cin.peek();
    cout<<dh<<endl;
    fflush(stdin);
    cin.getline(S1, 100, '\n');
    cout<<S1<<" "<<cin.gcount()<<endl;;
    return 0;
}