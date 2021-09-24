// POINTERS AND ARRAY 
#include<iostram.h>
using namespace std;
void main()
{
    int a[4];
    for (int i=0;i<=3;i++)
    {
        cin>>a[i];
    }
    for (int x=0;x<=3;x++)
    {
        cout<<"address:"<<a+x<<"\n";
        cout<<"value:"<<a[i]<<"\n";
    }
}

