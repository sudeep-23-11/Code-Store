//Strings
#include<iostream>
using namespace std;
int main()
{
    string s, s2;
    string::iterator it;
    int x;
    cin>>s;
    s.swap(s2);
    s2.push_back('a');
    cout<<s2.size()<<" "<<s2.front()<<" "<<s2.at(2)<<endl;
    while(s2.empty()==0)
    {
        cout<<s2.back();
        s2.pop_back();
    }
    cout<<endl;
    s.resize(5, 'a');
    x=s.length();
    s.erase(x-2, x);
    s.insert(x-2, 2, 'z');
    for(it=s.begin();it!=s.end();it++)
    cout<<*it;
    cout<<endl;
    s.clear();
    fflush(stdin);
    getline(cin, s);
    cout<<s.find_first_of('a')<<" "<<s.find_last_of('a')<<endl;
    cout<<s.find_first_not_of('a')<<" "<<s.find_last_not_of('a')<<endl;
    cout<<s.find("aa")<<" "<<s.rfind("aa")<<" "<<s.compare("aa")<<endl;
    s.replace(3, 2, "zz");
    cout<<s.substr(3, 2)<<endl;
    return 0;
}