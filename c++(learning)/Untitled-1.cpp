#include<iostream>
using namespace std;
int main()
{
     #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int a,b,sum;
    cin>>a>>b;
    sum=a+b;
    cout<<sum;
    return 0;

}