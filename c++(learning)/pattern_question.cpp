#include<bits/stdc++.h>
using namespace std;
int main()
{   // a simple rectangle pattern (r,c)
    // int r,c;
    // cin>>r>>c;
    // int i,j;
    // for(i=0;i<r;i++)
    // {
    //     for(j=0;j<c;j++)
    //     {
    //         cout<<"%\t";
    //     }
    //     cout<<endl;
    // }
    
// hallow rectangle pattern
    // int r,c,i,j;
    // cin>>r>>c;
    // for (i=0;i<r;i++)
    // {
    //      for(j=0;j<c;j++)
    //      {
    //          if((i==0)||(i==r-1)||(j==0)||(j==c-1))
    //          {
    //              cout<<"*";
    //          }
    //          else
    //          {
    //              cout<<" ";
    //          }
    //      }
    // cout<<endl;      
    // }
// half pyramid 
//     int i,n;
//     cin>>n;
//     int c=n;
//     for (i=0;i<n;i++)
//     {
//         for(int j=0;j<c;j++)
//         {
//             cout<<" *";
//         }
//         c--;
//     cout<<endl;
//     }
// return 0;
// }
// inverted half peramid 
// int n;
// cin>>n;
// for(int i=n;i>0;i--)
// {
//     for(int j=n;j>0;j--)
//     {
//         cout<<" *";
//     }
//     n--;
//     cout<<endl;
// }
// }
// Half Pyramid after 180 degree rotation
// int n;
// cin>>n;
// for(int i=0;i<=n;i++)
// {
//     for(int j=0;j<=n;j++)
//     {
//         if(j<=n-i)
//         {
//             cout<<" ";
//         }
//         else 
//         {
//             cout<<"*";
//         }
//     }
// cout<<endl;
// }
// }
// Half Pyramid using numbers
// int n;
// cin>>n;
// int count =1;
// for(int i=0;i<n;i++)
// {
//     for(int j=i;j<n;j++)
//     {
//         cout<<count+j<<" ";
//     }
// cout<<endl;
// }
// }
// Half Pyramid using numbers(part 2)
// int n;
// cin>>n;
// for(int i=1;i<=n;i++)
// {
//     for(int j=1;j<=i;j++)
//     {
//         cout<<" "<<j;
//     }
// cout<<endl;
// }
// }
// Half Pyramid using numbers(part 3)
int n;
cin>>n;
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n-i+1;--j)
    {
        cout<<i<<" ";
    }
cout<<endl;
}
}