#include<bits/stdc++.h>
using namespace std;
// int sum(int n)
// {
//     int z=0;
//     for(int i=1;i<=n;i++)
//     {
//         z+=i;
//     }
//     return z;
// }
// int main()
// {   int n;
//     cin>>n; 
//     cout<<"\n the sum of the no is:"<<sum(n);
//     return 0;

// }
// binary to decimal
// int btoc(int num)
// {
//     int x,z=0;
//     int y=1;
//     while(num>0)
//     {
//     x=num%10;
//     z+=x*y;
//     y*=2;
//     num=num/10;
//     }
//     return z;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<"the decimal value of the given binary no is "<<btoc(n); 
// }
//octal to decimal 
// int otod(int num)
// {
//     int x,z=0;
//     int y=1;
//     while(num>0)
//     {
//     x=num%10;
//     z+=x*y;
//     y*=8;
//     num=num/10;
//     }
//     return z;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<"the decimalvalue of the given octal no is "<<otod(n); 
// }
// hexadecimal to decimal(???????????)
// int otod(int num)
// {
//     int x,z=0;
//     int y=1;
//     while(num>0)
//     {
//     x=num%10;
//     z+=x*y;
//     y*=8;
//     num=num/10;
//     }
//     return z;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<"the decimal value of the given octal no is "<<otod(n); 
// }
void dtob(int num)
{   int i;
    int x[10];
    do
    {
            if( i==i)
            {
            x[i]=num%2;
            }
        i=i+1;
    }while((num=num/2)>=0);
    int y=*(&x + 1) - x;
    for(int i=y;i>0;i--)
    {
        cout<<x[i];
    }
}
int main()
{
    int n;
    cin>>n;
    dtob(n); 
}