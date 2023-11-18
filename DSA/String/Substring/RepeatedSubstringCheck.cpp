//RepeatedSubstringCheck
#include<iostream>
using namespace std;
int main()
{
    string s, r;
    cin>>s;
    r=s+s;
    r.erase(0, 1);
    r.pop_back();
    if(r.find(s) != string::npos)
    cout<<"Repeated Substring present"<<endl;
    else
    cout<<"Repeated Substring not present"<<endl;
    return 0;
}