#include<iostream>
#include<cmath>
using namespace std;
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