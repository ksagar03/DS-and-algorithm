#include<iostream>
using namespace std;
int main()
{
    int a[3][3];
    int x[10];
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cin>>a[i][j];
           
        }    
    }
     for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
             for(int y=0;y<10;y++)
            {
                x[y]=a[i][j];   
            }
        }
    }
    int w=0;
    if(w<10)
    {
        cout<<x[w]<<",";
        w++;
    }
return 0;
}
