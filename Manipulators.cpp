//Manipulators
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    ios_base::fmtflags f;
    f=cout.flags();
    cout<<showpos<<showpoint<<987.000<<endl;
    cout.flags(f);
    cout<<noshowpos<<noshowpoint<<987.000<<endl;
    cout.flags(f);
    cout<<uppercase<<showbase<<hex<<9876<<endl;
    cout.flags(f);
    cout<<noshowbase<<setbase(16)<<9876<<endl;
    cout.flags(f);
    cout<<nouppercase<<showbase<<oct<<9876<<endl;
    cout.flags(f);
    cout<<noshowbase<<setbase(8)<<9876<<endl;
    cout.flags(f);
    cout<<fixed<<987.654<<endl;
    cout.flags(f);
    cout<<scientific<<987.654<<endl;
    cout.flags(f);
    cout<<right<<setw(8)<<9876<<endl;
    cout.flags(f);
    cout<<setfill('_')<<left<<setw(8)<<9876<<endl;
    cout.flags(f);
    cout<<setprecision(4)<<987.654<<endl;
    cout.flags(f);
    return 0;
}