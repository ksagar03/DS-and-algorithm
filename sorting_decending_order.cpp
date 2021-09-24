#include<iostream>
using namespace std;
int main()
{
    int a[30];
    int n,temp;
    cout<<"enter the values of n:";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int w=0;w<=n;w++)
    {
        cout<<a[w]<<",";
    }
    for(int j=0;j<=n;j++)
    {
        if(a[j]<a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    cout<<"\n";
    for(int w=0;w<=n;w++)
    {
        cout<<a[w]<<",";
    }
    return 0;
    }
