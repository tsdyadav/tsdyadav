#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
    return b;
    if(b==0)
    return a;
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        if(b>a)
        {
            b=b-a;
        }
    }
    return a;
}
int lcm(int a,int b)
{
    int m=gcd(a,b);
    return a*b/m;
}
int main()
{int a,b,ans;
    cout<<"enter the value of a "<<endl;
    cin>>a;
    cout<<"enter the value of b "<<endl;
    cin>>b;
   ans=gcd( a, b);
   cout<<"the gcd is :"<<ans<<endl;
   cout<<"the lcm is :"<<lcm(a,b)<<endl;
    return 0;
}
