//Friend
#include<iostream>
using namespace std;
class CF {
    public:
        void display();
};
class Data {
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
        friend void F();
        friend class C;
        friend void CF::display();
};
void F()
{
    Data obj;
    obj.setX(3);
    obj.setY(2);
    cout<<obj.x<<" "<<obj.y<<endl;
}
class C {
    public:
        void display() {
            Data obj;
            obj.setX(3);
            obj.setY(2);
            cout<<obj.x<<" "<<obj.y<<endl;
        }
};
void CF::display() {
    Data obj;
    obj.setX(3);
    obj.setY(2);
    cout<<obj.x<<" "<<obj.y<<endl;
}

int main()
{
    F();

    C obj1;
    obj1.display();

    CF obj2;
    obj2.display();
    return 0;
}