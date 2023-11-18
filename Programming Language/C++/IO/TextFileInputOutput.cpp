//TextFileInputOutput
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fp;
    ofstream ft;
    char ch, dh;
    fp.open("demo1.txt");
    ft.open("demo2.txt");
    while(fp.eof()==0)
    {
        fp.get(ch);
        ft.put(ch);
    }
    ft.close();
    fp.close();
    fp.open("demo2.txt");
    while(fp.eof()==0)
    {
        fp.get(dh);
        cout<<dh;
    }
    cout<<endl;
    fp.close();
    char str[100];
    fp.open("demo2.txt");
    while(fp.eof()==0)
    {
        fp.getline(str, 100, '\n');
        cout<<str<<endl;;
    }
    fp.close();
    return 0;
}