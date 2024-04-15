//Pair
#include<iostream>
using namespace std;
int main()
{
    pair<int, int>p, p2;
    p=make_pair(1, -1);
    p2={2, -2};
    p.swap(p2);
    cout<<p.first<<" "<<p.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    return 0;
}