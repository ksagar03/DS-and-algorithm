#include<bits/stdc++.h>
using namespace std;
                        //to find whether the number 1 or 0 prasent at 
                        //that position in the binary number
// int num(int n,int pos)
// {
//     int x;
//     x=((n & (1<<pos))!=0);// 5=0101 and(1<<pos)-left shifting 1 by 2 times 0000=0100   
//      return x;
// }
// int setbit(int n,int pos)
// {

//     return (n | (1<<pos));
// }

// int main()
// {
//     cout<<num(5,2)<<endl;
//                      //SET BIT - assigning value one at a given positon in a binary number 
//     cout<<setbit(5,3);
// }
            // to find whether the no: is power of 2 using bit manipulation(chapter 14.2)
//  int powerof2(int n)
//  {
//      return ((n && (n & n-1))==0);
//  }
//  int main()
//  {
//      cout<<powerof2(25);
//  }
            // to find total no of ones in a binary reprasentations
// int ones(int n)
// {
//     int count=0;
//     while(n)
//     {
//         n=n & n-1;
//         count+=1;
//     }
//     return count;           //*************IMPORTANT*********
// }

// int main()
// {
//     cout<<ones(8);
// }
            // print no of subsets in the array 
// int subset(int x[],int n)
// {
//     int count=0; 
//     for(int i=0;i<(1<<n);i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(i & (1<<j))
//             {
//                 cout<<x[j]<<" ";
//                  count+=1;
//             }
//         }
//     cout<<endl;
//     }
//     cout<<count;
// }
// int main()
// {
//     int v=5;
//     int a[v]={2,3,4,5,6};
//     subset(a,v);
// }
                // to find unique no in the array which is not repeating twice 
int unique(int a[],int n)
{
    int xors=0;
    for(int i=0;i<n;i++)
    {
        xors=xors^a[i];
    }
    return xors;
}

int main()
{
    int a[]={2,4,6,8,4,8,6,2,9};
    cout<<unique(a,9);
}
                        // 