//Strings
#include<iostream>
using namespace std;
int main()
{
    string s1, s2;
    string::iterator it;
    int i, x;
    getline(cin, s1);
    s1.pop_back();
    s1.push_back('r');
    cout<<s1.front();
    for(i=1;i<(s1.size()-1);i++)
    cout<<s1.at(i);
    cout<<s1.back()<<endl;
    x=s1.find("Kumar");
    s2=s1.substr(x, x+4);
    s1.erase(x, x+4);
    s1.insert(x, "Srivastava");
    for(it=s1.begin();it!=s1.end();it++)
    cout<<*it;
    s1.swap(s2);
    s1.clear();
    cout<<endl<<s1.empty()<<endl;
    for(i=0;i<s2.size();i++)
    cout<<s2[i];
    cout<<endl<<s2.compare(s1)<<endl;
    return 0;
}