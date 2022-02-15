//Inheritance
#include<iostream>
using namespace std;
class Parent
{
    protected:
        float i, j;

        float sum()
        {
            float s;
            s=i+j;
            return s;
        }
        float diff()
        {
            float d;
            if(i>=j)
            d=i-j;
            else
            d=j-i;
            return d;
        }

    public:
        Parent(float x, float y)
        {
            i=x;
            j=y;
        }
        virtual void display1()
        {
            cout<<"This function is adding and subtracting two numbers"<<endl;
            cout<<i<<" "<<j<<endl;
        }
        void display2()
        {
            cout<<"This function is adding and subtracting two numbers"<<endl;
            cout<<i<<" "<<j<<endl;
        }
        void AS()
        {
            cout<<sum()<<" "<<diff()<<endl;
        }
};
class Child : public Parent
{
    private:
        float k, l;

    protected:
        float pro()
        {
            float p;
            p=k*l;
            return p;
        }
        float quo()
        {
            float q;
            if(k>=l)
            q=k/l;
            else
            q=l/k;
            return q;
        }

    public:
        Child(float x, float y) : Parent(x, y)
        {
            k=x;
            l=y;
        }
        void display1()
        {
            cout<<"This function is adding, subtracting, multiplying and dividing two numbers"<<endl;
            cout<<k<<" "<<l<<endl;
        }
        void display2()
        {
            cout<<"This function is adding, subtracting, multiplying and dividing two numbers"<<endl;
            cout<<k<<" "<<l<<endl;
        }
        void ASMD()
        {
            cout<<sum()<<" "<<diff()<<endl;
            cout<<pro()<<" "<<quo()<<endl;
        }

        friend void reset(Child c)
        {
            c.i=0.0;
            c.j=0.0;
            c.k=0.0;
            c.l=0.0;
            cout<<c.i<<" "<<c.j<<" "<<c.k<<" "<<c.l<<endl;
        }
};
int main()
{
    Parent p(22.44, 33.66);
    Child c(22.44, 33.66);
    Parent *ptr=&c;
    p.display1();
    p.display2();
    p.AS();
    c.display1();
    c.display2();
    c.ASMD();
    ptr->display1();
    ptr->display2();
    ptr->AS();
    reset(c);
    return 0;
}