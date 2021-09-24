#include<iostream>
using namespace std;
int main()
{
    float a,b;
    char input;
    float value;
    cin>>a>>b;
    cout<<"enter the char:";
    cin>>input;
    switch (input)
    {   case 'a': 
            value=a+b;
        break;
        case 's':
            value=a-b;
        break;
        case 'm':
            value=a*b;
        break;
        case 'd':
            value=a/b;
        break;
    default:
     cout<<"enter the correct char";
        break;
    }
    cout<<"\n";
    cout<<value;
    return 0;

}