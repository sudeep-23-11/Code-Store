//Structures
#include<iostream>
using namespace std;
struct rectangle
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
        void area()
        {
            float area;
            area=len*bre;
            cout<<area<<endl;
        }
        void peri()
        {
            float peri;
            peri=2*(len+bre);
            cout<<peri<<endl;
        }
};
int main()
{
    struct rectangle r1, r2;
    r1.setdata(33.66, 66.33);
    r1.displaydata();
    r1.area();
    r1.peri();
    r2.getdata();
    r2.displaydata();
    r2.area();
    r2.peri();
    return 0;
}
