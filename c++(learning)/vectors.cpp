#include<bits/stdc++.h>
using namespace std;
// int main()
// {
//     vector<int> v;//vector initialization
//     v.push_back(3);
//     v.push_back(8);
//     v.push_back(5);
//     v.push_back(6);

//     // To print the values of the array v
//                                  // 1st way
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }cout<<endl;
    
//                                     //2nd way
//     vector<int>::iterator it;
//     for(it=v.begin();it!=v.end();it++)
//     {
//         cout<<*it<<" ";
//     }
//     cout<<endl;
//                                      //3rd way
//     for(auto element:v)
//     {
//         cout<<element<<" ";
//     }cout<<endl;
    
//     vector<int> s2(3,56);
//     for(auto y:s2)
//     {
//         cout<<y<<" ";
//     }cout<<endl;
//     swap(v,s2);
//     for(auto z:v)
//     {
//         cout<<z<<" ";
//     }cout<<endl;
//     for(auto x:s2)
//     {
//         cout<<x<<" ";
//     }cout<<endl;

// vector<string> z1(5,"who");
// {
//     for(auto ele:z1)
//     {
//         cout<<ele<<" ";
//     }
// }
                //PAIR function is used to pair objects of same datatype or different datatype 
                // in a same variable
    // pair<int,char> z;
    // z.first=10;
    // z.second='wa';
    

// }
// reducing the array value to the smaller values
bool mycompare(pair<int,int> p1,pair<int,int> p2)
{
    return p1.first<p2.first;
} 
int main()
{
   int arr[]={10,2,3,5,9,8};
   vector<pair<int,int>> v;
   for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
   {
       v.push_back(make_pair(arr[i],i)); // this make pair will automatically make a pair of the value
       //or
       //pair<int,int> v;
       //p.first=a[i];
       //p.second=i;
   }
   sort(v.begin(),v.end(),mycompare);
   for(int i=0;i<v.size();i++)
   {
       arr[v[i].second]=i;
   }
   for(int i=0;i<v.size();i++)
   {
       cout<<arr[i]<<" ";
   }
}