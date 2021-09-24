#include<bits/stdc++.h> 
using namespace std; 
                            // ***************************
                            //      sorting algorithm
                            //*****************************

                            // merge sort
// void merge(int arr[],int x,int y,int mid)
// {
//     int n1=mid-x+1;
//     int n2=y-mid;
//     int a[n1];
//     int b[n2];
//     for(int i=0;i<n1;i++)
//     {
//         a[i]=arr[x+i];
//     }
//     for(int i=0;i<n2;i++)
//     {
//         b[i]=arr[mid+1+i];
//     }
//     int i=0;
//     int j=0;
//     int k=x;
//     while(i<n1 && j<n2)
//     {
//         if(a[i]<b[j])
//         {
//             arr[k]=a[i];
//             k++;
//             i++;
//         }
//         else
//         {
//             arr[k]=b[j];
//             k++;
//             j++;
//         }
//     }
//     while(i<n1)
//     {
//         arr[k]=a[i];
//         k++;
//         i++;
//     }
//      while(j<n2)
//     {
//         arr[k]=b[j];
//         k++;
//         j++;
//     }  
// }
// void mergesort(int arr[] ,int x, int y)
// {
//     if(x<y)
//     {
//          int mid=(x+y)/2;
//         mergesort(arr,x,mid);
//         mergesort(arr,mid+1,y);
//         merge(arr,x,y,mid);
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     mergesort(arr,0,n);
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// return 0;
// }
                        //quick sort 
// int divide(int arr[],int l,int r)
// {
//     int pviot=arr[r];
//     int i=l-1;
//     for(int j=0;i<r;j++)
//     {
//         if(arr[j]<pviot)
//         {
//             i++;
//             swap(arr[i],arr[j]);
//         }
//     } 
//     swap(arr[i+1],arr[r]);
//     return i+1;
// }
// void quick_sort(int arr[],int l,int r)
// {
//     if(l<r)
//     {
//         int pi=divide(arr,l,r);
//         quick_sort(arr,l,pi-1);
//         quick_sort(arr,pi+1,r);
//     }
// }
// int main()
// {
//     int arr[]={5,4,7,8,3};
//     quick_sort(arr,0,4);
//     for(int i=0;i<5;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
            // count sort 

// void countsort(int a[],int n)
// {
//     int k=a[0];
//     for(int i=0;i<n;i++)
//     {
//         k=max(k,a[i]);
//     }
//     int count[10]={0};
//     for(int i=0;i<k;i++)
//     {
//         count[a[i]]++;
//     }
//     for(int i=1;i<=k;i++)
//     {
//         count[i]+=count[i-1] ;
//     }
//     int output[n];
//     for(int i=n-1;i>=0;i--)
//     {
//         output[--count[a[i]]]=a[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         a[i]=output[i];                     //partial output
//     }
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
//     countsort(a,n);
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }
// }
                            //DNF sort-this sorting is applicable to the array which has only 3 different 
                            //  no: example(2,3,2,4,3,2,4,3)
// void dnf(int a[],int n)
// {
//     int low=0;
//     int mid=0;
//     int high=n-1;
//     while(mid<=high)
//     {
//         if(a[mid]==0)
//         {swap(a[mid],a[low]);
//             low++; mid++;
//         }
//         else if(a[mid]==1)
//         {
//             mid++;
//         }
//         else
//         {
//             swap(a[mid],a[high]);
//             high--;
//         }
//     }

// }
// int main()
// {
//     int n=7;
//     int a[7]={1,2,0,1,2,1,0};
//     dnf(a,n);
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }
// }
                        // wave sort 
void wave(int a[],int n)
{
    for(int i=1;i<=n;i+=2)
    {
        if(a[i]>a[i-1])
        {
            swap(a[i],a[i-1]);
        }
        if(a[i]>a[i+1] && i<=n-2)
        {
            swap(a[i],a[i+1]);
        }
    }
}
int main()
{
    int a[6]={2,4,3,5,4,1};
    wave(a,6);
    for(int i=0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }
}