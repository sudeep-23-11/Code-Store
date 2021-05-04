//ConstructorsAndDestructors
#include<iostream>
using namespace std;
class data
{
    private:
        int i, j;
    public:
        data(int k)
        {
            cout<<"Inside the Constructor"<<endl;
            cin>>i;
            j=k;
        }
        void display()
        {
            cout<<"The value of i is "<<i<<endl;
            cout<<"The value of j is "<<j<<endl;
        }
        ~data()
        {
            cout<<"Inside the Destructor"<<endl;
        }
};
int main()
{
    data d1(10);
    d1.display();
    return 0;
}