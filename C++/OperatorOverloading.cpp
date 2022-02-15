//OperatorOverloading
#include<iostream>
using namespace std;
class complex
{
    private:
        float real, imag;

    public:
        void setdata(float r, float i)
        {
            real=r;
            imag=i;
        }
        void getdata()
        {
            cin>>real>>imag;
        }
        void displaydata()
        {
            cout<<real<<" "<<imag<<endl;
        }
        complex operator +(complex c)
        {
            complex t;
            t.real=real+c.real;
            t.imag=imag+c.imag;
            return t;
        }
        complex operator -(complex c)
        {
            complex t;
            t.real=real-c.real;
            t.imag=imag-c.imag;
            return t;
        }
        complex operator =(complex c)
        {
            real=c.real;
            imag=c.imag;
            return *this;
        }
};
class increment
{
    private:
        int count;

    public:
        void setcount(int i)
        {
            count=i;
        }
        void displaycount()
        {
            cout<<count<<endl;
        }
        increment operator ++()
        {
            increment t;
            ++count;
            t.count=count;
            return t;
        }
        increment operator ++(int i)
        {
            increment t;
            t.count=count;
            count++;
            return t;
        }
};
int main()
{
    complex a, b, c, d, e, f;
    a.setdata(33.66, 66.33);
    a.displaydata();
    b.getdata();
    b.displaydata();
    c=a+b;
    c.displaydata();
    d=a-b;
    d.displaydata();
    e.setdata(10, 5);
    e.displaydata();
    f=e;
    f.displaydata();
    increment w, x, y, z;
    w.setcount(0);
    x=++w;
    w.displaycount();
    x.displaycount();
    y.setcount(0);
    z=y++;
    y.displaycount();
    z.displaycount();
    return 0;
}