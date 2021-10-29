#include<iostream>
#include<cmath>
using namespace std;
int main()
{ int m;
    bool flag=0;
    cout<<"enter the no:";
    cin>>m;
    for(int i=2;i<sqrt(m);i++)
    {
        if(m%i==0)
    {
        cout<<"non-prime no";
        flag=1;
        break;
    }
    }
    if(flag==0)
    {
        cout<<"the number "<<m<<" is a prime no";
    }
return 0;
}
bool itsprime(int n){
    for (int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
return true;
}
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(itsprime(i))
        {
            cout<<i<<endl;
        }
    }
return 0;
}