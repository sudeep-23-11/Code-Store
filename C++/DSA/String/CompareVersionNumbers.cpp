//CompareVersionNumbers
#include<iostream>
using namespace std;
int version(string X, string Y);
int main()
{
    int n;
    string s1, s2;
    cin>>s1>>s2;
    n=version(s1, s2);
    if(n>0)
    cout<<"Version "<<s1<<" is greater than Version "<<s2<<endl;
    else if(n<0)
    cout<<"Version "<<s1<<" is smaller than Version "<<s2<<endl;
    else
    cout<<"Version "<<s1<<" is equal to Version "<<s2<<endl;
    return 0;
}
int version(string X, string Y)
{
    int i, j,  v1, v2;
    i=0;
    j=0;
    v1=0;
    v2=0;
    while((i<X.size())||(j<Y.size()))
    {
        if((i<X.size())&&(isdigit(X[i])!=0))
        {
            v1=(v1*10)+(X[i]-'0');
            i++;
        }
        if((j<Y.size())&&(isdigit(Y[j])!=0))
        {
            v2=(v2*10)+(Y[j]-'0');
            j++;
        }
        if(((i>=X.size())||(X[i]=='.'))&&((j>=Y.size())||(Y[j]=='.')))
        {
            if(v1<v2)
            return -1;
            else if(v1>v2)
            return 1;
            v1=0;
            v2=0;
            i++;
            j++;
        }
    }
    return 0;
}