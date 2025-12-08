//ClassAndObject
#include<iostream>
using namespace std;
class Data {
    public:
        int id;
        static double amt;

        Data() {
        this->id=0;
        }
        Data(int id) {
            this->id=id;
        }
        Data(Data &d) {
            this->id=d.id;
        }
        ~Data() {}

        int getId() {
            return this->id;
        }
        void setId(int id) {
            this->id=id;
        }
        static double getAmt() {
            return amt;
        }
};
double Data::amt=12.34;

int main()
{
    Data obj1;
    obj1.setId(56);
    cout<<obj1.id<<" "<<obj1.getId()<<endl;

    Data obj2(78);
    Data obj3(obj2);
    cout<<obj2.id<<" "<<obj3.getId()<<endl;

    cout<<Data::amt<<" "<<Data::getAmt()<<endl;
    return 0;
}