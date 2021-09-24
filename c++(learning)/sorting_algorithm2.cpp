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
void swaps(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
} 
int divide(int arr[],int l,int r)
{
    int pviot=arr[r];
    int i=l-1;
    for(int j=1;i<r;j++)
    {
        if(arr[j]<pviot)
        {
            i++;
            swaps(arr,i,j);
        }
    } 
    swaps(arr,i+1,r);
    return i+1;
}
void quick_sort(int arr[],int l,int r)
{
    if(l<r)
    {
        int pi=divide(arr,l,r);
        quick_sort(arr,l,pi-1);
        quick_sort(arr,pi+1,r);
    }
}
int main()
{
    int arr[5]={5,4,7,8,3};
    quick_sort(arr,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}