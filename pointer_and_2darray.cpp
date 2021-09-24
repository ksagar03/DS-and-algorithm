#include<iostream>
using namespace std;
int main()
{
    int a[10][20];
    int i,j;
    cout<<"enter the values in the array";
    for (i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<*(*(a+1))<<"\t";
    cout<<*(*a+1);
    return 0;
}
