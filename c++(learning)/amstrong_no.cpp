   //amstrong no is a no which gives the same no when we add the cube of the each digit of the no:
#include<bits/stdc++.h>
using namespace std;
// int main()
// {
//     int n,x;
//     cin>>n;
//     int z=n;
//     int sum=0;
//     while(n>0)
//     { x=n%10;
//      sum+=pow(x,3);
//      n=n/10;
//     }
//     cout<<sum<<endl;
//     if(sum==z)
//     {
//         cout<<"the number "<<z<<" is a amstrong number";
//     }
//     else
//     {
//         cout<<"the number "<<z<<" is not a amstrong number";
//     }
// return 0;
// }
// problem to find max and min no from the array;
int main()
{
    int a[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maxno=1;
    int minno=1;
    for(int i=0;i<n;i++)
    {
        maxno=max(maxno,a[i]);
        minno=min(minno,a[i]);
    }
cout<<maxno<<" "<<minno;
return 0;
}
