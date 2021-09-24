#include<iostream>
#include<cmath>
using namespace std;
// bool itsprime(int n){
//     for (int i=2;i<=sqrt(n);i++)
//     {
//         if(n%i==0)
//         {
//             return false;
//         }
//     }
// return true;
// }
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     for(int i=a;i<=b;i++)
//     {
//         if(itsprime(i))
//         {
//             cout<<i<<endl;
//         }
//     }
// return 0;
// }
// to find th factoril of the no;
// int fac(int num)
// {   int facto=1;
//     for(int i=num;i>0;i--) 
//     {
//         facto*=i;
//     }  
//     return facto;
// }
// int main()
// {
//     int n;
//     cout<<"enter the no:";
//     cin>>n;
//     cout<<"\n";
//     cout<<fac(n);
// }
// to find nCr 
// int fac(int num)
// {   int facto=1;
//     for(int i=num;i>0;i--) 
//     {
//         facto*=i;
//     }  
//     return facto;
// }
// int main()
// {
//     int n,r;
//     cout<<"enter the no:";
//     cin>>n>>r;
//     cout<<"\n";
//     int a=fac(n)/(fac(r)*fac(n-r));
//     cout<<a;
//     return 0;
// }
// pascal triangle 
int fac(int num)
{   int facto=1;
    for(int i=num;i>0;i--) 
    {
        facto*=i;
    }  
    return facto;
}
int main()
{
    int n;
    cout<<"enter the no:";
    cin>>n;
    cout<<"\n";
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
             cout<<fac(i)/(fac(j)*fac(i-j))<<" ";
        }
    cout<<endl;
    }
    return 0;
}