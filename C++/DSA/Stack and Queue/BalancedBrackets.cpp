//BalancedBrackets
#include<iostream>
#include<stack>
using namespace std;
bool balance(string s, stack<char>st);
int main()
{
    string s;
    stack<char>st;
    cin>>s;
    if(balance(s, st)==true)
    cout<<"Balanced brackets"<<endl;
    else
    cout<<"Unbalanced brackets"<<endl;
    return 0;
}
bool balance(string s, stack<char>st)
{
    int i;
    char c1, c2;
    for(i=0;i<s.size();i++)
    {
        c1=s.at(i);
        if((c1=='(')||(c1=='[')||(c1=='{'))
        st.push(c1);
        else if(st.empty()==1)
        return false;
        else
        {
            c2=st.top();
            if(((c2=='(')&&(c1==')'))||((c2=='[')&&(c1==']'))||((c2=='{')&&(c1=='}')))
            st.pop();
            else
            return false;
        }
    }
    if(st.empty()==0)
    return false;
    return true;
}