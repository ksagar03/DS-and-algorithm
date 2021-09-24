   //amstrong no is a no which gives the same no when we add the cube of the each digit of the no:
#include<bits/stdc++.h>
using namespace std;
// int main()
// {
//     int n,x;
//     cout<<"enter the no:";
//     cin>>n;
//     int z=n;
//     cout<<endl;
//     int sum=0;
//     while(n>0)
//     { x=n%10;
//      sum+=pow(x,3);
//      n=n/10;
//     }
//     cout<<sum;
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
// int main()
// {
//     int a[10];
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     int maxno=1;
//     int minno=1;
//     for(int i=0;i<n;i++)
//     {
//         maxno=max(maxno,a[i]);
//         minno=min(minno,a[i]);
//     }
// cout<<maxno<<" "<<minno;
// return 0;
// }
//linear search
// int main()
// {
//     int a[10];
//     for (int i=1;i<=5;i++)
//     {
//         cin>>a[i];
//     }
//     int k;
//     cin>>k;
//     for(int j=1;j<=5;j++)
//     {
//         if (a[j]==k)
//         {
//             cout<<"the number is in the location "<<j;
//         }
//     }
    
// return 0;
// }
//binary search
int binarysearch( int a[],int n,int k)
{
    int s=0;
    int e=n;
    while(s<=e)
    { int mid=(s+e)/2;
        if(a[mid]==k)
        {
            return mid;
        }
        else if(a[mid]>k)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    int a[10];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    cout<<binarysearch(a,n,k)<<endl;
    return 0;
}