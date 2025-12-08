//ExceptionHandling
#include<iostream>
using namespace std;
void checkAge(int age) noexcept (false)
{
    if (age<0)
    throw runtime_error("negative age not allowed");
    else if (age<18)
    cout<<"under age"<<endl;
    else
    cout<<"legal adult"<<endl;
}
int main()
{
    try {
        checkAge(21);
        checkAge(11);
        checkAge(-1);
    }
    catch(runtime_error e) {
        cout<<e.what()<<endl;
    }
    return 0;
}