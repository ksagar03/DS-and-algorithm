#include<iostream>
#include<cmath>
using namespace std;
 int main()
    {
    //     int n[20];
    //     double d=0;
    //     int j=0;
    //     cout<<"enter the binary no";
    //     for(int i=0;i<5;i++)
    //     {
    //         cin>>n[i];
    //     }
    //     for(int k=0;k<5;k++)
    //     {
    //         cout<<n[k];
    //     }
    //     for(int i=4;i>=0;i--,j++)
    //     {
    //         d=d+(pow(2,j))*n[i];  
    //     }
    // cout<<"the decimal no is:"<<d;
//decimal to binary 
        int n;
         cout<<"enter the decimal no:";
        cin>>n;
        int c;
        int z[20];
       
        for (int i=0;i>=0;i++)
        {
            if(n<=0)
             {
                 n=n/2;
             c=n%2;
            z[i]=c;
            }
        }
    for (int i=3;i>=0;i--)
    {
        cout<<z[i];
    }
    }
