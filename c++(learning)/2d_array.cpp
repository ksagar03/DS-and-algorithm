#include<bits/stdc++.h>
using namespace std;
//2D-array
// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     int a[n][m];
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             cin>>a[i][j];
//         } 
//     }
//     for(int i=0;i<n;i++)                         //To print 2D array
//     {
//         for(int j=0;j<m;j++)
//         {
//             cout<<a[i][j]<<" ";
//         } 
//         cout<<endl;
//     }

// }
                        // program to find no in the array
// int main()
// {
//     int n,m,x;
//     cin>>n>>m>>x;
//     int a[n][m];
//     bool y=0;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=m;j++)
//         {
//             cin>>a[i][j];
//         } 
//     }
//     for(int i=1;i<=n;i++)                        
//     {
//         for(int j=1;j<=m;j++)
//         {
//            if(a[i][j]==x)
//            {
//                cout<<i<<" "<<j;
//                y=1;
//            } 
//         } 
//     }
//     if(y==1)
//     {
//         cout<<"the no is there in the array";
//     }
//     else 
//     {
//         cout<<"the no is not there in the array";
//     }
// }
// program to search no in the matrix(alternative method)-this method has lesser complexity than the
// above program(but in this the values should be sorted in increasing order i.e 1,2,3 in the array)
int main()
{
    int n,m;
    cin>>n>>m;
    int t;
    cin>>t;
    bool found=0;
    int a[n][m];
    for(int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    int r=2;
    int c=m;
    if(a[r][c]==t)
    {
        found=1;
    }
    else if(a[r][c]>t)
    {
        c--;
    }
    else
    {
        r++;
    }
    if(found==1)
    {
    cout<<"the no is there in the array";
    }
   else 
       {
           cout<<"the no is not there in the array";
       }
}
                            // transpose of the matrix 
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n][n];
//     // int b[n][n];
//     for(int i=1;i<=n;i++)
//     {
//         for (int j=1;j<=n;j++)
//         {
//             cin>>a[i][j];
//         }
//     }
// for(int i=1;i<=n;i++)
//     {
//         for (int j=1;j<=n;j++)
//         {                                    optional
//             b[j][i]=a[i][j];
//         }
//     }
//     for(int i=1;i<=n;i++)
//     {
//         for (int j=1;j<=n;j++)
//         {
//             cout<<a[j][i]<<" ";
//         }
//     cout<<endl;
//     }
// }
//  int main()
// {
//      int x,y,z;
//      cin>>x>>y>>z;
//      int a[x][y];
//      int b[y][z];
//      int c[x][z];
//      for(int i=1;i<=x;i++)
//     {
//         for (int j=1;j<=y;j++)
//         {
//             cin>>a[i][j];
//         }
//     }
//      for(int i=1;i<=y;i++)
//     {
//         for (int j=1;j<=z;j++)
//         {
//             cin>>b[i][j];
//         }
//     }
//     for(int i=1;i<=x;i++)
//     {
//         for (int j=1;j<=z;j++)
//         {
//             c[i][j]=0;
//         }
//     }
//     for(int i=1;i<=x;i++)
//     {
//         for(int j=1;j<=z;j++)
//         {
//             for(int k=1;k<=y;k++)
//             {
//                 c[i][j]+=a[i][k]*b[k][j];
//             }
//         }
//     }
//     for(int i=1;i<=x;i++)
//     {
//         for (int j=1;j<=z;j++)
//         {
//             cout<<c[i][j]<<" ";
//         }
//     cout<<endl;
//     }
// }