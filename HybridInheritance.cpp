//HybridInheritance
#include<iostream>
using namespace std;
class Grandparent
{
    protected:
        int i, j;

    public:
        Grandparent(int x, int y)
        {
            cout<<"Inside the Grandparent Constructor"<<endl;
            i=x;
            j=y;
        }
        void display()
        {
            cout<<i<<" "<<j<<endl;
        }
};
class ParentA : virtual public Grandparent
{
    public:
        ParentA(int x, int y) : Grandparent(x, y)
        {
            cout<<"Inside the ParentA Constructor"<<endl;
        }
};
class ParentB : virtual public Grandparent
{
    public:
        ParentB(int x, int y) : Grandparent(x, y)
        {
            cout<<"Inside the ParentB Constructor"<<endl;
        }
};
class Child : public ParentA, public ParentB
{
    public:
        Child(int x, int y) : ParentA(x, y), ParentB(x, y), Grandparent(x, y)
        {
            cout<<"Inside the Child Constructor"<<endl;
        }
};
int main()
{
    Child c(10, 5);
    c.display();
    return 0;
}