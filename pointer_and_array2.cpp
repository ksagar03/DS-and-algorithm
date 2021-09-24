// POINTERS AND ARRAY 
#include<iostream>
using namespace std;
int main()
{ 
    int a[4];
    int *p=a;
    for (int i=0;i<=3;i++)
    {
        cin>>a[i];
    }
    while(*p)
       {
         cout<<"address:"<<p<<"\n";
        cout<<"value:"<<*p<<"\n";
        *p++;
    }
    return 0;
}

