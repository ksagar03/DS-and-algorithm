// inclusion and exclusion principle is used to find no of ways anything is occuring 
#include<bits/stdc++.h>
using namespace std;
// int divisible(int n,int a,int b)
// {
//     int c1=n/a;
//     int c2=n/b;
//     int c3=n/(a*b);
//     return c1+c2-c3;
// }
// int main()
// {
//     int n,a,b;
//     cin>>n>>a>>b;
//     cout<<divisible(n,a,b);
// }
// to find gcd of the no using euclidian algorithm 
// int gcd(int a,int b)
// {   while(b!=0)
//     {
//         int rem=a%b;
//         a=b;
//         b=rem;
//     }
// return a;
// }
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     cout<<gcd(a,b);
// }
//***************************************RECURSION************************************************
//sum of n number using recursion
// int sum(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     int presum=sum(n-1);
//     return n+presum;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<sum(n);
// }

// int power(int n ,int p )
// {
//     if(p==0)
//     {
//         return 1;
//     }
//     int prepower=power(n,p-1);
//     return n*prepower;
// }
// int main()
// {
//     int n,p;
//     cin>>n>>p;
//     cout<<power(n,p);
// }
// factorial of the number 
// int fact(int n)
// {
//     if(n==0)
//     {
//         return 1;
//     }
//     int presum=fact(n-1);
//     return n*presum;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<fact(n);
// }
//fibonacci number 
// int fib(int n)
// {
//     if(n==0 || n==1)
//     {
//         return n;
//     }
//     return fib(n-1)+fib(n-2);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<fib(n);
// }
//check whether the array is sorted or not 
// bool sorted(int a[] ,int n)
// {
//     if(n==1)
//     {
//         return 1;
//     }
//     int issorted =sorted(a+1,n-1);
//     return (a[0]<a[1] && issorted);
// }
// int main()
// {
//     int a[]={1,2,6,4,5};
//     cout<<sorted(a,5);
// }
// void dec(int n)
// {                               decreasing 
//     if(n==0)
//     {
//     return;
//     }
//     cout<<n<<" ";
//      dec(n-1);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     dec(n);
// }
// void inc(int n)
// {
//     if(n==0)
//     {                               //increasing
//         return;
//     }
    
//      inc(n-1);
//      cout<<n<<" ";
// }
// int main()
// {
//     int n;
//     cin>>n;
//     inc(n);
// }
//reverseing the given string
// void reverse(string s)
// {
//     //base case 
//     if(s.size()==0)
//     {
//         return;
//     }
//     string subs=s.substr(1); // this line will start creating subarray after position 1.
//     reverse(subs);
//     cout<<s[0];
// }
// int main()
// {
//     string s="sagar";
//     reverse(s);
// }
                            // To replace pi with 3.14 in the string 

// void replace(string s)
// {
//     //base case 
//     if(s.size()==0)
//     {
//         return;
//     }
//     if(s[0]=='p' && s[1]=='i')
//     {
//         cout<<"3.14";
//         replace(s.substr(2));
//     }
//     else 
//     {
//         cout<<s[0];
//         replace(s.substr(1));
//     }
// }
// int main()
// {
//     string s="pipppiippi";
//     replace(s);
// }
                                    // to remove duplicate from the string

// string duplicate(string s)
// {
//     if (s.size()==0)
//     {
//         return "";
//     }
//     string a =duplicate(s.substr(1));
//     if (s[0]==a[0])
//     {
//        return a;
//     }
//     else
//     {
//         return s[0]+a;
//     }
// } 
// int main()
// {
//     string s="aaaabcsssg";
//     cout<<duplicate(s);
// }
                            // To move all x in an array to the last 
// string moveallx(string s) 
// {
//     if(s.size()==0)
//     {
//         return "";
//     }
//     string ans =moveallx(s.substr(1));
   
//     if (s[0]=='x')
//     {
//         return ans+s[0];
//     }
//     else 
//     {
//         return s[0]+ans;
//     }
// }
// int main()
// {
//     string s="abxxashsxxxaswj" ;
//     cout<<moveallx(s);
// }
                        // removing vowels from the array 
// string vowels(string s) 
// {
//     if(s.size()==0)
//     {
//         return "";
//     }
//     string ans =vowels(s.substr(1));
   
//     if (s[0]=='a'||s[0]=='e'||s[0]=='i'||s[0]=='o'||s[0]=='u'||s[0]=='A'||s[0]=='E'||s[0]=='I'||s[0]=='O'
//     ||s[0]=='U')
//     {
//         return ans;
//     }
//     else 
//     {
//         return s[0]+ans;
//     }
// }
// int main()
// {
//     string s="programming" ;
//     cout<<vowels(s);
// }
                // to print all the substring using recursion
// void substring(string s, string ans)
// {
//     if(s.size()==0)
//     {
//        cout<<ans<<endl; 
//        return;
//     }
//     char ch=s[0];
//     string str=(s.substr(1));
//     substring(str,ans);
//     substring(str,ans+ch);
    
// } 
// int main()
// {
//     string s;
//     cin>>s;
//     substring(s,"");
//     cout<<endl;
// }
                        //  to print all the substring also there ascii value using recursion

// void substring(string s, string ans)
// {
//     if(s.size()==0)
//     {
//        cout<<ans<<endl; 
//        return;
//     }
//     char ch=s[0];
//     int code=ch;
//     string str=(s.substr(1));
//     substring(str,ans);
//     substring(str,ans+ch);
//     substring(str,ans+to_string(code));
    
// } 
// int main()
// {
//     string s;
//     cin>>s;
//     substring(s,"");
//     cout<<endl;
// }
    // Permutation of the string- in this one of char is kept constant and rest we swap 
//  void permutation(string s,string ans)
//  {
//      if(s.size()==0)// base condition
//      {
//          cout<<ans<<endl;
//      }
//      for(int i=0;i<s.size();i++)
//      {
//         char ch =s[i];
//         string str= s.substr(0,i)+s.substr(i+1);
//         permutation(str,ans+ch);
//      }
//  }
//  int main()
//  {
//      string s="ABC";
//      permutation(s,"");
//  }
//                     //number of posible ways one can reach end of the maze
int maze(int n,int i,int j)
{
    if(i==n-1 && j==n-1)
    {
        return 1;
    }
    else if(i>=n || j>=n)
    {
        return 0;
    }
    return maze(n,i+1,j)+maze(n,i,j+1);
}
int main()
{
    int n,i,j;
    cout<<maze(3,0,0);
}