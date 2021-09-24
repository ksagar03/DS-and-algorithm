#include<bits/stdc++.h>
using namespace std;
// int main()
// {
//     int n;
//     int a[10];
//     cin>>n;                                     SORTING ARRAYs AND SUBARRARY CONCEPTS 
//     for(int i=0;i<n;i++)                                 IMPORTANT QUESTIONS 
//     {
//         cin>>a[i];
//     }
//     for(int i=1;i<n;i++)
//     {
//        int current=a[i];
//        int j=i-1;
//        while(a[j]>current && j>=0)
//        {
//          a[j+1]=a[j];
//          j--;
//        }
//        a[j+1]=current; 
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }

// return 0;
// } 
// to find max no b/n two number in the array
// int main()
// {
//     int n;
//     int a[10];
//     cin>>n;
//     int x[10];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     int maxno=INT_MIN;
//     for (int i=0;i<n;i++)
//     {
//        maxno=max(maxno,a[i]);
//        cout<<maxno<<" ";
//     }
// return 0;
// }
// int main()
// {

//      int n;
//     int a[10];
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     int sum=0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i;j<n;j++)
//         {
//              sum+=a[j];
//              cout<<sum<<" ";
//         }
//         sum=0;
//     }
// return 0;
// }
            // largest arithmatic subarray(this question was asked in "google" technical round)
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     int prd=a[1]-a[0];
//     int ans=2;//minimum length is 2 
//     int j=2;//since starting two numbers of the array is already used;
//     int curr=2;//    
//     for(int i=0;i<n;i++)
//     {   
//         while (j<n)
//         {
//          if(prd==a[j]-a[j-1])   
//          {
//              curr++;
//          }
//          else                               //In one second the compiler can do 10^8 operations.
//          {
//              prd=a[j]-a[j-1];
//              curr=2;
//          }
//          ans=max(curr,ans);
//          j++;
//         }
//     }
// cout<<ans;
// return 0;
// }
/*Given an array arr[] of size N. The task is to find the first repeating element in an
array of integers, i.e., an element that occurs more than once and whose index of
first occurrence is smallest */
//  int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     int idx[10];
//     for(int i=0;i<10;i++)
//     {
//         idx[i]=-1;
//     }
//     int minidx=INT_MAX;
//     for(int i=0;i<n;i++)
//     {
//         if(idx[a[i]] != -1)
//         {
//             minidx=min(minidx,idx[a[i]]);
//         }
//         else
//         {
//             idx[a[i]]=i;
//         }
//     }
//         if (minidx== INT_MAX)
//         {
//             cout<<"-1";
//         } 
//         else
//         {
//             cout<<minidx;
//         }
// return 0;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     int sum=12;
//     int st;
//     int en;
//      for (st=1;st<=n;st++)
//     { 
//         int cursum=a[st];
//      for(en=st;en<=n;en++)
//      {
//          cursum+=a[st];

//      if (cursum==sum)
//      {
//          cout<<st<<" "<<en;
//          return 0;
//     }
//     else 
//     {
        // return 0;                              Wrong answer 
//     }
//      }
//      cursum=0;
// }
// }
// Find the smallest positive missing number in the given array.
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     bool check[30];
//     for(int i=0;i<30;i++)
//     {
//         check[i]=0;
//     }
//    for(int i=0;i<n;i++)
//    {
//        if(a[i]>=0)
//        {
//            check[a[i]]=1;
//        }   
//     }
//     int ans=-1;
//     for(int i=1;i<30;i++)
//     {
//         if(check[i]==0)
//         {
//             ans=i;
//             break;   
//         }

//     }
//     cout<<ans;  
// }
//              To find maximum sum of the subarray 
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];                               
//     for (int i=0;i<n;i++)                         
//     {
//         cin>>a[i];
//     }
//     int cursum=0;
//     int maxsum=INT_MIN;
//     for(int i=0;i<n;i++)
//     {
//         cursum+=a[i];
//         if(cursum<0)
//         {                                // this method is called "kadane's algorithm"
//             cursum=0;                     // its time complexity is less compared to basic method
//         }
//         maxsum=max(maxsum,cursum);
//     }
//     cout<<maxsum;
// }
                            // ***************************
                            //      sorting algorithm
                            //*****************************

                            // merge sort
void merge(int arr[],int x,int y,int mid)
{
    int n1=mid-x+1;
    int n2=y-mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++)
    {
        a[i]=arr[x+i];
    }
    for(int i=0;i<n2;i++)
    {
        b[i]=arr[mid+1+i];
    }
    int i=0;
    int j=0;
    int k=x;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            k++;
            i++;
        }
        else
        {
            arr[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<n1)
    {
        arr[k]=a[i];
        k++;
        i++;
    }
     while(j<n2)
    {
        arr[k]=a[j];
        k++;
        j++;
    }  
}
void mergesort(int arr[] ,int x, int y)
{
    if(x<y)
    {
         int mid=(x+y)/2;
        mergesort(arr,x,mid);
        mergesort(arr,mid+1,y);
        merge(arr,x,y,mid);
    }
}
int main()
{
    int n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {mergesort(arr,0,n);
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}