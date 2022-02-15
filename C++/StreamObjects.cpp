//StreamObjects
#include<iostream>
using namespace std;
int main()
{
    int i, wi;
    float f, wf;
    char s[100];
    wchar_t ws[100];
    cin>>i>>f>>s;
    cout<<i<<" "<<f<<" "<<s<<endl;
    cerr<<i<<" "<<f<<" "<<s<<endl;
    clog<<i<<" "<<f<<" "<<s<<endl;
    wcin>>wi>>wf>>ws;
    wcout<<wi<<" "<<wf<<" "<<ws<<endl;
    wcout<<wi<<" "<<wf<<" "<<ws<<endl;
    wcout<<wi<<" "<<wf<<" "<<ws<<endl;
    return 0;
}