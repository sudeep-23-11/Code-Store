//2DArray
#include<iostream>
using namespace std;
void display(int A[][2], int N, int M);
int main()
{
    int i;
    int A[10][2];
    for(i=0;i<10;i++)
    {
        A[i][0]=(i+1);
        A[i][1]=(i+1)*10;
    }
    display(A, 10, 2);
    return 0;
}
void display(int A[][2], int N, int M)
{
    int i, j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        cout<<*(*(A+i)+j);
        cout<<endl;
    }
}