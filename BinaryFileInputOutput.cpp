//BinaryFileInputOutput
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fp;
    ofstream ft;
    int a=33, x; 
    float b=66.99, y;
    char c='X', z;
    ft.open("demo.bin", ios::out|ios::binary);
    ft.write(reinterpret_cast<const char *>(&a), sizeof(a));
    ft.write(reinterpret_cast<const char *>(&b), sizeof(b));
    ft.close();
    ft.open("demo.bin", ios::app|ios::binary);
    ft.write(reinterpret_cast<const char *>(&c), sizeof(c));
    cout<<ft.tellp()<<" ";
    ft.seekp(-5, ios::cur);
    cout<<ft.tellp()<<" ";
    ft.seekp(5, ios::beg);
    cout<<ft.tellp()<<" ";
    ft.seekp(-5, ios::end);
    cout<<ft.tellp()<<" "<<endl;
    ft.close();
    fp.open("demo.bin", ios::in|ios::binary);
    fp.read(reinterpret_cast<char *>(&x), sizeof(x));
    fp.read(reinterpret_cast<char *>(&y), sizeof(y));
    fp.read(reinterpret_cast<char *>(&z), sizeof(z));
    cout<<x<<" "<<y<<" "<<z<<endl;
    cout<<fp.tellg()<<" ";
    fp.seekg(-5, ios::cur);
    cout<<fp.tellg()<<" ";
    fp.seekg(5, ios::beg);
    cout<<fp.tellg()<<" ";
    fp.seekg(-5, ios::end);
    cout<<fp.tellg()<<" "<<endl;
    fp.close();
    return 0;
}