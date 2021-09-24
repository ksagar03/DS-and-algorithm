// here we know about the class 
#include<bits/stdc++.h>
using namespace std;
// class students{
//     string area;// this data member will be private 
//     // to access this data member outside the class we need to create function in public section 
//   public:
//     string av(string s)
//     {
//         area=s;
//     }
//     string name;
//     int age;
//     bool gender;
//     void prints(){
//         cout<<"area ="<<area<<" ";
//         cout<<"name ="<<name <<" ";
//         cout<<" age ="<<age<<" ";
//         cout<<" gender ="<<gender<<" ";
//         cout<<endl;
//     }

// };
// int main()
// {
//     students a[2];
//      string s;
//     for(int i=0;i<2;i++)
//     {
//         cout<<"area =";
//         // cin>>a[i].area;//  this command will not work because area is private
//         cin>>s;
//          a[i].av(s);
//         cout<<"name =";
//         cin>>a[i].name;
//         cout<<" age =";
//         cin>>a[i].age;
//         cout<<" gender =";
//         cin>>a[i].gender;
//         cout<<endl;
       
//     }
//     for(int i=0;i<2;i++)
//         {
//             a[i].prints();
//         }
//         return 0;
// }
                    // constructor-when ever a class object is created then the construtor is 
                    // automatically called 
// three type of constructor 
//1.default constructor 
//2. parameterized constructor 
//3. copy constructor
class details{
    public:
    string name;
    int std;
    int rollno;
    details()
    {
        cout<<"default constructor"<<endl;;
    }
    details(string a,int b, int c)// parameterized constructor
    {
        name=a;
        std=b;
        rollno=c;
    }
    details(details &s)//copy constructor 
    {
        name=s.name;
        std=s.std;
        rollno=s.rollno;
    }
    //destructor is used to destory all obect that we have created using constructor 
    ~details(){
        cout<<"destructor called "<<endl;// in the o/p we get 4times destructor called because we have
        // created 4 objects(s,z,x,y)
    }
   void printinf()
    {
        cout<<" name= "<<name<<" ";
        cout<<" std= "<<std<<" ";
        cout<<" rollno= "<<rollno<<" ";
        cout<<endl;
    }
};
int main()
{
    details s("sagar",12,4060990);
    s.printinf();
    details z("sai",12,234522);
    z.printinf();
    details x;
    details y=s;
    y.printinf();
}