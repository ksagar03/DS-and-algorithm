#include<bits/stdc++.h>
using namespace std;
                    // to create a maze with some obstruction(chpter=18.1)
// bool issafe(int** a,int x,int y,int n)
// {
//     if(x<n && y<n && a[x][y]==1)
//     {
//         return 1;

//     }
//     return 0;
// }
// bool maze(int** a,int x,int y,int n,int** sul)
// {
//     if ((x==(n-1)) && (y==(n-1)))
//     {
//         sul[x][y]=1;
//         return 1;
//     }
//     if(issafe(a,x,y,n))
//     {
//         sul[x][y]=1;
//         if(maze(a,x+1,y,n,sul))
//         {
//             return 1;
//         }
//         if(maze(a,x,y+1,n,sul))
//         {
//             return 1;
//         }
//         sul[x][y]=0;      //backtracking 
//         return 0;
//     }
//     return 0;
// }
// int main()
// {
//     int n;
//     cin>>n;

//     int** a=new int*[n];        // ??????????dynamic memory allocation ??????????
//     for(int i=0;i<n;i++)
//     {
//         a[i]=new int[n];
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cin>>a[i][j];
//         }
//     }
//      int** sul=new int*[n];        // ??????????dynamic memory allocation ??????????
//     for(int i=0;i<n;i++)
//     {
//         sul[i]=new int[n]; 
//         for(int j=0;j<n;j++)
//         {
//             sul[i][j]=0;
//         }
//     }
//     if(maze(a,0,0,n,sul))
//     {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cout<<sul[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     }
// }

                                // permutation of the string 
// void permutation(string s,int l,int r)
// {
//     if(l==r)
//     {
//         cout<<s<<endl;
//     }
//     for (int i=l;i<r;i++)
//     {
//         swap(s[l],s[i]);
//         permutation(s,l+1,r);//recursion
//         swap(s[l],s[i]);//backtracking 
//     }

// }
// int main()
// {
//     string s="ABC";
//     int r=s.size();
//     permutation(s,0,r);
// }
                                // placing n queen in a n*n array 
bool issafe(int** a,int x,int y,int n)
{
    for(int row=0;row<x;row++)
    {
        if(a[row][y]==1)
        {
            return 0;
        }
    }
    int row=x;
    int col=y;
    while(row>=0 && col>=0)
    {
        if(a[row][col]==1)
        {
            return 0;
        }
        row--;
        col--;
    }
    row=x;
    col=y;
    while(row>=0 && col<n)
    {
        if(a[row][col]==1)
        {
            return 0;
        }
    row--;
    col++;
    }
    return 1;
}
bool nqueen(int** a,int x,int n)
{
    if(x>=n)
    {
        return 1;
    }
    for(int col=0;col<n;col++)
    {
        if(issafe(a,x,col,n))
        {
            a[x][col]=1;
        
        if(nqueen(a,x+1,n))
            return 1;
        a[x][col]=0;
    }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
 int** a=new int*[n];
 for(int i=0;i<n;i++)
 {
     a[i]=new int[n];
     for (int j=0;j<n;j++)
     {
         a[i][j]=0;
     }
 }
 if(nqueen(a,0,n))
 {
     for(int i=0;i<n;i++)
     {
         for (int j=0;j<n;j++)
         {
             cout<<a[i][j]<<" ";
         }
         cout<<endl;
     }
 }
}
