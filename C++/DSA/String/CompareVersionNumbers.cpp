//CompareVersionNumbers
#include<iostream>
using namespace std;
int main()
{
    int i, j, r1, r2;
    string s1, s2;
    cin>>s1>>s2;
    i=0;
    j=0;
    while((i<s1.size())||(j<s2.size()))
    {
        r1=0;
        while((i<s1.size())&&(s1[i]!='.'))
        {
            r1=r1*10+(s1[i]-'0');
            i++;
        }
        r2=0;
        while((j<s2.size())&&(s2[j]!='.'))
        {
            r2=r2*10+(s2[j]-'0');
            j++;
        }
        i++;
        j++;
        if(r1>r2)
        {
            cout<<"Version "<<s1<<" is greater than Version "<<s2<<endl;
            exit(0);
        }
        else if(r1<r2)
        {
            cout<<"Version "<<s1<<" is smaller than Version "<<s2<<endl;
            exit(0);
        }
    }
    cout<<"Version "<<s1<<" is equal to Version "<<s2<<endl;
    return 0;
}