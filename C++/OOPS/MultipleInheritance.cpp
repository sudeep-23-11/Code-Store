//MultipleInheritance
#include<iostream>
using namespace std;
class ParentA
{
    protected:
        float i, j, s;

    public:
        ParentA(float x, float y)
        {
            cout<<"Inside the ParentA Constructor"<<endl;
            i=x;
            j=y;
        }
        void sum()
        {
            s=i+j;
        }
        void display()
        {
            cout<<s<<endl;
        }
};
class ParentB
{
    protected:
        float i, j, d;

    public:
        ParentB(float x, float y)
        {
            cout<<"Inside the ParentB Constructor"<<endl;
            i=x;
            j=y;
        }
        void diff()
        {
            if(i>=j)
            d=i-j;
            else
            d=j-i;
        }
        void display()
        {
            cout<<d<<endl;
        }
};
class Child : public ParentA, public ParentB
{
    public:
        Child(float x, float y) : ParentA(x, y), ParentB(x, y)
        {
            cout<<"Inside the Child Constructor"<<endl;
        }
};
int main()
{
    Child c(22.44, 33.66);
    c.sum();
    c.ParentA::display();
    c.diff();
    c.ParentB::display();
    return 0;
}