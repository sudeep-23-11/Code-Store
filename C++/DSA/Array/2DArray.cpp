//2DArray
#include<iostream>
using namespace std;
void printarray(int A[][2], int x, int y);
int main()
{
    int i;
    int A[10][2];
    for(i=0;i<10;i++)
    {
        A[i][0]=(i+1);
        A[i][1]=(i+1)*10;
    }
    printarray(A, 10, 2);
    return 0;
}
void printarray(int A[][2], int x, int y)
{
    int i, j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        cout<<*(*(A+i)+j);
        cout<<endl;
    }
}