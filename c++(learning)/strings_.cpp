#include<bits/stdc++.h>
using namespace std;
// int main()
// {                   // In strings memory spectification is not requried. 
//     string str;
//     cin>>str;
//     cout<<str;
//     return 0;
// }
// string diclaration==2
// int main()
// {
//     string s1(7,'s');
//     cin>>s1;
//     cout<<s1;

// }
// // string diclaration==3
// int main()
// {
//     string s1="hello iam sagar";
//     cout<<s1;

// }
// string diclaration==4
// int main()
// {
//     string s1;
//     getline(cin,s1); // To print sentance with spaces in b/n
//     cout<<s1;
// }
                                // functions in strings
        // 1. Append
// int main()
// {
//     string s1="hello ";
//     string s2="world";
//    // s1.append(s2);
//         // or 
//     cout<<s1+s2<<endl;
//     //cout<<s1;

//             //2. clear
//     s2.clear();
//     cout<<s1+s2;
                //3. empty
// if(s2.empty())
//  {
//   cout<<"s2 is empty";
//}
// }
            //4. compare
// int main()
// {
//     string s1="hello ";
//     string s2="world";
//    cout<<s2.compare(s1);
// }
            // 5. erase function
// int main()
// {
//     string s1="programming";
//     cout<<s1.erase(7,4)<< endl;
//             // 6. Find
//     cout<<s1.find("m")<<endl;;
//             // 7. insert 
//     cout<<s1.insert(0,"what is ")<<endl;
//             // 8. size or length
//     cout<<s1.size()<<endl;
//     // for(int i=0;i<s1.length();i++)
//     // {
//     //     cout<<s1[i]<<endl;
//     // }
//             //substring
//     string s=s1.substr(5,6);
//     cout<<s<<endl;
//     // converting string to int-stoi
//     string s2="9232";
//     int z=stoi(s2);
//     cout<<z-232<<endl;
//     cout<<to_string(z)+"0";
    
// }
                    // sorting a string  
// int main()
// {
//     string s1="asknkzasksm";
//     cout<<s1<<endl;
//     // sort(s1.begin(),s1.end());
// // to display in decreaseing order
//     sort(s1.begin(),s1.end(),greater<char>());
//     cout<<s1;
// }
// converting character which are in lowercase to uppercase 
// int main()
// {
//     string s1="AKSHDUWEIWA ";
//     // cout<<'s'-'S'; (ASCII)the difference b/n lowercase and uppercase is 32 therfore if we sub 32 
//     // from lowercase we can get uppercase values.
//     // for(int i=0;i<s1.length();i++)
//     // {
//     //     if(s1[i]>='a' && s1[i]<='z')
//     //     {
//     //         s1[i]-=32;
//     //     }
//     // }
//     cout<<s1;
// // using inbuilt function
//     transform(s1.begin(),s1.end(),s1.begin(),::tolower);
//     //here s1.begin and s1.end is used to get the whole string to transform function
//     // and onemore s1.begin() is used for telling where to start.
//     cout<<s1;
// }
// program to find which char is repeated maximum no of time.
int main()
{
    string s="sagsbdetgsshakwiojsn";
    int a[26];
    for(int i=0;i<26;i++)
      {
            a[i]=0;
      }
    for(int i=0;i<s.size();i++)
    {
        a[s[i]-'a']++;//'a' reprasents value 0 therefore 's'-'a'=ascii(s)-ascii(a)
    }
    char f;
    int maxno=-1;
    for(int i=0;i<26;i++)
    {
        if(maxno<a[i])
        {
            maxno=a[i];
            f='a'+i-32;
        }
    }
    cout<<maxno<<"-"<<f;
}
