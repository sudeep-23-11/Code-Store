//ClassesAndObjects
#include<iostream>
using namespace std;
class rectangle
{
    private:
        float len, bre;

    public:
        static int count;

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
            count++;
            cout<<count<<" : "<<len<<" "<<bre<<endl;
        }
        void area()
        {
            float area;
            area=len*bre;
            cout<<area<<endl;
        }
        void peri();
        static void resetcount()
        {
            count=0;
        }
};
int rectangle::count=0;
void rectangle::peri()
{
    float peri;
    peri=(len+bre)*2;
    cout<<peri<<endl;
}
int main()
{
    rectangle r1, r2;
    rectangle *ptr=&r2;
    r1.setdata(22.44, 33.66);
    r1.displaydata();
    r1.area();
    r1.peri();
    ptr->getdata();
    ptr->displaydata();
    ptr->area();
    ptr->peri();
    cout<<rectangle::count<<endl;
    rectangle::resetcount();
    return 0;
}