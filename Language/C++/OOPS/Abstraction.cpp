//Abstraction
#include<iostream>
using namespace std;
class C1 {
    public:
        virtual void print() = 0;
};
class C2: public C1 {
    public:
        void print() {
                cout<<"Hello C"<<endl;
            }
};
class C3: public C1 {
    public:
        void print() {
                cout<<"Hello C++"<<endl;
            }
};
class C4: public C2, public C3 {};
class C5 {
    public:
        void display() {
            cout<<"Hello C#"<<endl;
        }
};
class C6: virtual public C5 {};
class C7: virtual public C5 {};
class C8: public C6, public C7 {
    public:
        C8(): C6(), C7(), C5() {}
};

int main()
{
    C4 obj1;
    obj1.C2::print();
    obj1.C3::print();

    C8 obj2;
    obj2.display();
    return 0;
}