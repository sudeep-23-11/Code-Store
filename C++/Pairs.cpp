//Pairs
#include<iostream>
using namespace std;
int main()
{
    int i;
    char c;
    pair<int, char>pa;
    pair<int, char>pb={33, 'X'};
    cin>>i>>c;
    pa=make_pair(i, c);
    float f;
    string s;
    pair<float, string>pc;
    pair<float, string>pd={66.99, "Sudeep"};
    cin>>f>>s;
    pc=make_pair(f, s);
    cout<<pa.first<<" "<<pa.second<<endl;
    cout<<pc.first<<" "<<pc.second<<endl;
    pa.swap(pb);
    pc.swap(pd);
    cout<<pa.first<<" "<<pa.second<<endl;
    cout<<pc.first<<" "<<pc.second<<endl;
    return 0;
}
