//ClassesAndObjects
#include<iostream>
using namespace std;
class rectangle
{
    private:
        float len, bre;
    public:
        void setdata(float l, float b)
        {
            len=l;
            bre=b;
        }
        void getdata()
        {
            cin>>len>>bre;
        }
        void displaydata()
        {
            cout<<len<<" "<<bre<<endl;
        }
        void calculate()
        {
            float peri, area;
            peri=2*(len+bre);
            area=len*bre;
            cout<<peri<<" "<<area<<endl;
        }
};
int main()
{
    rectangle r1, r2;
    r1.setdata(33.66, 66.33);
    r1.displaydata();
    r1.calculate();
    r2.getdata();
    r2.displaydata();
    r2.calculate();
    return 0;
}