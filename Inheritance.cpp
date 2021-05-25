#include<iostream>
using namespace std;
class Parent
{
    friend void reset(Parent p)
    {
        p.i=0;
        p.j=0;
        cout<<p.i<<" "<<p.j<<endl;
    }

    private:
        int i, j;

    protected:
        int sum(int x, int y)
        {
            int s;
            s=x+y;
            return s;
        }
        int diff(int x, int y)
        {
            int d;
            if(x>=y)
            d=x-y;
            else
            d=y-x;
            return d;
        }

    public:
        Parent(int x, int y)
        {
            i=x;
            j=y;
        }
        void AS()
        {
            cout<<"Inside the AS method"<<endl;
            cout<<i<<" "<<j<<endl;
            cout<<sum(i, j)<<" "<<diff(i, j)<<endl;
        }
        virtual void readme()
        {
            cout<<"This function is adding and substracting two numbers"<<endl;
        }
};
class Child : public Parent
{
    friend void reset(Child c)
    {
        c.k=0;
        c.l=0;
        cout<<c.k<<" "<<c.l<<endl;
    }

    private:
        int k, l;
        
    protected:
        int pro(int x, int y)
        {
            int p;
            p=x*y;
            return p;
        }
        int quo(int x, int y)
        {
            int q;
            if(x>=y)
            q=x/y;
            else
            q=y/x;
            return q;
        }

    public:
        Child (int x, int y) : Parent(x, y)
        {
            k=x;
            l=y;
        }
        void ASMD()
        {
            cout<<"Inside the ASMD method"<<endl;
            cout<<k<<" "<<l<<endl;
            cout<<sum(k, l)<<" "<<diff(k, l)<<endl;
            cout<<pro(k, l)<<" "<<quo(k, l)<<endl;
        }
        void readme()
        {
            cout<<"This function is adding, substracting, multiplying and dividing two numbers"<<endl;
        }
};
int main()
{
    Parent p(10, 5);
    p.readme();
    p.AS();
    reset(p);
    Child c(10, 5);
    c.readme();
    c.ASMD();
    reset(c);
    return 0;
}