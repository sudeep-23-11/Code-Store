//Inheritance
#include<iostream>
using namespace std;
class C1 {
    protected:
        int x;
        void setX(int x) {
            this->x=x;
        }
    
    private:
        int y;
        void setY(int y) {
            this->y=y;
        }

    public:
        void mainY() {
            setY(2);
            cout<<y<<endl;
        }

        C1(int k) {
            cout<<(k*2)<<endl;
        }
        double a=2.3;
        virtual void display() {
            cout<<a<<endl;
        }
};
class C2 {
    public:
        string s;

    public:
        void sum(char ch) {
            cout<<ch<<endl;
        }
        void sum(int x, int y) {
            cout<<(x+y)<<endl;
        }
        void sum(double x, double y) {
            cout<<(x+y)<<endl;
        }

        C2() {}
        C2(string s) {
            this->s=s;
        }
        C2 operator +(C2 obj) {
            C2 res;
            res.s=this->s+" "+obj.s;
            return res;
        }
        C2 operator -(C2 obj) {
            C2 res;
            res.s=obj.s+" "+this->s;
            return res;
        }
};
class C3: public C1 {
    public:
        void mainX() {
            setX(3);
            cout<<x<<endl;
        }

        C3(int k): C1(k) {
            cout<<(k*3)<<endl;
        }
        double a=4.6;
        void display() {
            C1::display();
            cout<<C1::a<<" "<<a<<endl;
        }
};

int main()
{
    C1 obj1(10);
    C2 obj2;
    C3 obj3(10);

    obj3.mainX();
    obj3.mainY();

    obj2.sum('x');
    obj2.sum(2, 3);
    obj2.sum(2.3, 4.6);
    obj1.display();
    obj3.display();

    C2 obj4("abc");
    C2 obj5("xyz");
    C2 obj6;
    obj6=obj4+obj5;
    cout<<obj6.s<<endl;
    obj6=obj4-obj5;
    cout<<obj6.s<<endl;
    return 0;
}