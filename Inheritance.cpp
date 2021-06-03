//Inheritance
#include<iostream>
using namespace std;
class Parent
{
    protected:
        int i, j;
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
        virtual void readme()
        {
            cout<<"This function is adding and substracting two numbers"<<endl;
        }
        void display()
        {
            cout<<"Inside the AS method"<<endl;
            cout<<i<<" "<<j<<endl;
        }
        void AS()
        {
            cout<<sum(i, j)<<" "<<diff(i, j)<<endl;
        }
};
class Child : public Parent
{
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
        void readme()
        {
            cout<<"This function is adding, substracting, multiplying and dividing two numbers"<<endl;
        }
        void display()
        {
            cout<<"Inside the ASMD method"<<endl;
            cout<<k<<" "<<l<<endl;
        }
        void ASMD()
        {
            cout<<sum(k, l)<<" "<<diff(k, l)<<endl;
            cout<<pro(k, l)<<" "<<quo(k, l)<<endl;
        }
        friend void reset(Child c)
        {
            c.i=0;
            c.j=0;
            c.k=0;
            c.l=0;
            cout<<c.i<<" "<<c.j<<" "<<c.k<<" "<<c.l<<endl;
        }
};
int main()
{
    Parent p(10, 5);
    p.readme();
    p.display();
    p.AS();
    Child c(10, 5);
    Parent *ptr=&c;
    ptr->readme();
    ptr->display();
    c.readme();
    c.display();
    c.ASMD();
    reset(c);
    return 0;
}