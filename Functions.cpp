//Functions
#include<iostream>
using namespace std;
int sum(int a, int b=0, int c=0);
void print(int x);
void print(double x);
void print(char x);
inline int square(int y);
inline int cube(int y);
int main()
{
    cout<<sum(10)<<endl;
    cout<<sum(10+20)<<endl;
    cout<<sum(10+20+30)<<endl;
    print(33);
    print(66.99);
    print('X');
    cout<<square(2)<<endl;
    cout<<cube(3)<<endl;
    return 0;
}
int sum(int a, int b, int c)
{
    int s=a+b+c;
    return s;
}
void print(int x)
{
    cout<<"Given Intger is "<<x<<endl;
}
void print(double x)
{
    cout<<"Given Real Number is "<<x<<endl;
}
void print(char x)
{
    cout<<"Given Character is "<<x<<endl;
}
inline int square(int y)
{
    return (y*y);
}
inline int cube(int y)
{
    return (y*y*y);
}