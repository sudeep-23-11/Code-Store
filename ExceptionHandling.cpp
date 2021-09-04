//ExceptionHandling
#include<iostream>
using namespace std;
int main()
{
    int i, months;
    float salary, income;
    string name;
    for(i=0;i<5;i++)
    {
        cin>>name>>salary>>months;
        try
        {
            try
            {
                if(name=="_")
                throw name;
                if((months<1)||(months>12))
                throw months;
                if(salary<0)
                throw salary;
                income=months*salary;
                cout<<"No Exception occured"<<endl;
                cout<<"Income of "<<name<<" is "<<income<<endl;
            }
            catch(int months)
            {
                cout<<"Exception occured"<<endl;
                cout<<"Months is "<<months<<endl;
                cout<<"Months must be in between 1 and 12"<<endl;
            }
            catch(float salary)
            {
                cout<<"Exception occured"<<endl;
                cout<<"Salary is "<<salary<<endl;
                cout<<"Salary cannot be negative"<<endl;
            }
        }
        catch(string name)
        {
            cout<<"Exception occured"<<endl;
            cout<<"Name is "<<name<<endl;
            cout<<"Name cannot be empty"<<endl;
        }
    }
    return 0;
}