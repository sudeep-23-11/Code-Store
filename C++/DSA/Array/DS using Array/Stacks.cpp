//Stacks
#include<iostream>
using namespace std;
int main()
{
    int N, top, i, x, y;
    cin>>N;
    int stack[N];
    top=0;
    cout<<"Press 1 to insert element to stack"<<endl;
    cout<<"Press 2 to delete element from stack"<<endl;
    cout<<"Press 0 to display elements of the stack"<<endl;
    cout<<"Press -1 to exit"<<endl;
    while(1)
    {   
        cin>>x;
        if(x==-1)
        break;
        switch(x)
        {
            case 1: cin>>y;
                    stack[top]=y;
                    top++;
                    break;
            case 2: top--;
                    break;
            case 0: for(i=0;i<top;i++)
                    cout<<stack[i]<<" ";
                    cout<<endl;;
        }
    }
    return 0;
}