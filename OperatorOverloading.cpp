//OperatorOverloading
#include<iostream>
using namespace std;
struct complex
{
    float real, imag;
};
complex setdata(float r, float i)
{
    complex c;
    c.real=r;
    c.imag=i;
    return c;
}
complex getdata()
{
    complex c;
    cin>>c.real>>c.imag;
    return c;
}
void displaydata(complex c)
{
    cout<<c.real<<" "<<c.imag<<endl;
}
complex operator +(complex c1, complex c2)
{
    complex c;
    c.real=c1.real+c2.real;
    c.imag=c1.imag+c2.imag;
    return c;
}
complex operator -(complex c1, complex c2)
{
    complex c;
    c.real=c1.real-c2.real;
    c.imag=c1.imag-c2.imag;
    return c;
}
int main()
{
    complex a, b, c, d;
    a=setdata(33.66, 66.33);
    b=getdata();
    displaydata(a);
    displaydata(b);
    c=a+b;
    d=a-b;
    displaydata(c);
    displaydata(d);
    return 0;
}