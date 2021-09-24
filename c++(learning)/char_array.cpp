#include<bits/stdc++.h>     
                                        // charcter array
                                        //checking whether the no is palindrome or not 
using namespace std;
// int main()
// {   int n;
//     cin>>n;
//     char a[n+1];
//     cin>>a;
//     bool x=0;
//     for(int i=0;i<n;i++)
//     {
//         if(a[i] !=a[n-1-i])
//         {
//             x=1;
//         }
//     }
//     if(x==0)
//     {
//         cout<<" the given word is palindrome";
//     }
//     else{
//         cout<<" the given word is not palindrome";
//     }
// }
                                        //to find largest word in the sentence 
//  int main()
//  {
//      int n;
//      cin>>n;
//      cin.ignore();
//      char a[n+1];
//      cin.getline(a,n);  // in cin if we type space while giving input then cin will stop taking the input
//      cin.ignore();      //  from the user therefore we use getline. ignore is used to stop the buffer 
//      int curlen=0,maxlen=0,st=0,maxst=0;
//      int i=0;
//      while(i<n)
//      {
//          if(a[i] ==' ' || a[i]=='\0')
//          {
//              if (curlen>maxlen)
//              {  maxst=st;
//                  maxlen=curlen;
//              }
//             st=i+1;
//             curlen=0;
//          }
//          else
//             curlen++;
//         if (a[i]=='\0')
//         {
//             break;
//         }
//          i++;
//      }
//     cout<<a<<endl;
//     cout<<maxlen<<endl;
//     cout<<maxst<<endl;
//     for (int i=0;i<maxlen;i++)
//     {
//         cout<<a[maxst+i];
//     }

//  }               //#############
                    // pointers 
                    //#############   
// int swap(int a,int b)
// {
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
// }                                 
// int main()          // this code will not swap the values of a and b because we are doing pass by value 
// // therefore the values will not swap.
// {
//     int a=12,b=6;
//     swap(a,b);
//     cout<<a<<" "<<b;
// }
int swap(int *a,int *b)
{
    int temp;
    temp=*a;        // modifying and accesing the values of a and b by using pointer 
    *a=*b;
    *b=temp;
}                                 
int main() 
{
    int a=12,b=6;
    swap(&a,&b);           //pass by reference 
    cout<<a<<" "<<b;
}