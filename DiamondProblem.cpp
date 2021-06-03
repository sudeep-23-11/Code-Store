//DiamondProblem
#include<iostream>
using namespace std;
class Grandparent1
{
    protected:
        int i, j;

    public:
        Grandparent1(int x, int y)
        {
            cout<<"Inside the Grandparent1 Constructor"<<endl;
            i=x;
            j=y;
        }
        void display()
        {
            cout<<i<<" "<<j<<endl;
        }
};
class Parent1A : public Grandparent1
{
    public:
        Parent1A (int x, int y) : Grandparent1(x, y)
        {
            cout<<"Inside the Parent1A Constructor"<<endl;
        }
};
class Parent1B : public Grandparent1
{
    public:
        Parent1B (int x, int y) : Grandparent1(x, y)
        {
            cout<<"Inside the Parent1B Constructor"<<endl;
        }
};
class Child1 : public Parent1A, public Parent1B
{
    public:
        Child1 (int x, int y) : Parent1A(x, y), Parent1B(x, y)
        {
            cout<<"Inside the Child1 Constructor"<<endl;
        }
};
class Grandparent2
{
    protected:
        int i, j;

    public:
        Grandparent2(int x, int y)
        {
            cout<<"Inside the Grandparent2 Constructor"<<endl;
            i=x;
            j=y;
        }
        void display()
        {
            cout<<i<<" "<<j<<endl;
        }
};
class Parent2A : virtual public Grandparent2
{
    public:
        Parent2A (int x, int y) : Grandparent2(x, y)
        {
            cout<<"Inside the Parent2A Constructor"<<endl;
        }
};
class Parent2B : virtual public Grandparent2
{
    public:
        Parent2B (int x, int y) : Grandparent2(x, y)
        {
            cout<<"Inside the Parent2B Constructor"<<endl;
        }
};
class Child2 : public Parent2A, public Parent2B
{
    public:
        Child2 (int x, int y) : Parent2A(x, y), Parent2B(x, y), Grandparent2(x, y)
        {
            cout<<"Inside the Child2 Constructor"<<endl;
        }
};
int main()
{
    Child1 c1(10, 5);
    c1.Parent1A::display();
    c1.Parent1B::display();
    Child2 c2(10, 5);
    c2.display();
    return 0;
}