//Abstraction
#include<iostream>
using namespace std;
class Parent
{
    protected:
        int data;

    public:
        void receivedata();
        int senddata();
};
class Child : public Parent
{
    public:
        void receivedata()
        {
            cin>>data;
        }
        int senddata()
        {
            return data;
        }
};
int main()
{
    Child c;
    c.receivedata();
    cout<<c.senddata()<<endl;
    return 0;
}