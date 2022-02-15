//References
#include<iostream>
using namespace std;
void cbv(int x, int y);
void cbr(int &p, int &q);
int main()
{
    int a=10, b=20;
    cbv(a, b);
    cout<<a<<" "<<b<<endl;
    cbr(a, b);
    cout<<a<<" "<<b<<endl;
    return 0;
}
void cbv(int x, int y)
{
    int t;
    t=x;
    x=y;
    y=t;
}
void cbr(int &p, int &q)
{
    int t;
    t=p;
    p=q;
    q=t;
}