//ConstructorsAndDestructors
#include<iostream>
using namespace std;
class data
{
    private:
        int i, j;

    public:
        data()
        {
            cout<<"Inside the Default Constructor of the object "<<this<<endl;
            cin>>i>>j;
        }
        data(int k, int l)
        {
            cout<<"Inside the Parameterized Constructor of the object "<<this<<endl;
            i=k;
            j=l;
        }
        data(data &d)
        {
            cout<<"Inside the Copy Constructor of the object "<<this<<endl;
            i=d.i;
            j=d.j;
        }
        void display()
        {
            cout<<"The value of i is "<<i<<endl;
            cout<<"The value of j is "<<j<<endl;
        }
        ~data()
        {
            cout<<"Inside the Destructor of the object "<<this<<endl;
        }
};
int main()
{
    data d1, d2(10, 5);
    data d3=d1;
    d1.display();
    d2.display();
    d3.display();
    return 0;
}