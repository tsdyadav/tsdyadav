#include <iostream>
using namespace std;

int main()
{
    /*   int n;
       cin>>n;
       int row,col,count=1;
       for(row=1;row<=n;row++)
       {
           for(col=1;col<=row;col++)
           {
               cout<<count;

           }
           count=count+1;
           cout<<endl;*/

    /*
     int n,row,col,count=1;
     cin>>n;
     for(row=1;row<=n;row++)
     {
        for(col=1;col<=row;col++)
        {
            cout<<count<<"\t";
            count++;
        }
        cout<<endl;
     }*/
    /*
 int i,row,col,n;
 cin>>n;
 for(row=1;row<=n;row++)
 {
    for(col=row;col>=1;col--)
    {
        cout<<col;

    }
    cout<<endl;
 }*/ /*
  int j,k,n;
  cin>>n;
  char i=65;
  for(j=1;j<=n;j++)
  {
     for(k=1;k<=n;k++)
     {
         cout<<i;
     }
     i++;
     cout<<endl;
  }*/
     // cout<<i;
    /*int j,k,n;
    cin>>n;
    char i=65;
    for(j=1;j<=n;j++)
    {
       for(k=1;k<=n;k++)
       {
           cout<<i;
           i++;
       }
       cout<<endl;
    }*/
    /*
 int i,j,k,n;
 cin>>n;
 char a=65;
   for(i=1;i<=n;i++)
   {
    for(j=1;j<=i;j++)
    {
        cout<<a;
    }
    a++;
    cout<<endl;
   }*/
    // pending me hai
    /*int i,j,k;
    int n;

    cin>>n;
    char a=65;
 for(i=1;i<=n;i++)
    {
     for(j=1;j<=i;j++)
     {
          // cout<<a;
           a=65+n;
           cout<<a;
           a++;
     }

     cout<<endl;
    }
 */ /*
  int i,j,k;
  int n;
  cin>>n;
  int t=n;
  for(i=1;i<=n;i++)
  {

      for(j=t;j>=0;j--)
      {
          cout<<" ";

      }
      for(k=1;k<=i;k++)
    {cout<<"*";}
    cout<<endl;
      t--;
  }*/
    /*
 int i,j,k;
 for(i=1;i<=9;i++)
 {
     cout<<"*";
 }
 cout<<"*        *"<<endl;
 cout<<"*        *"<<endl;
 cout<<"*        *"<<endl;
 cout<<"*        *"<<endl;
 cout<<"*        *"<<endl;
 for(j=1;j<=9;j++)
 {
     cout<<"*";
 }*/
 
/*  1
   121
  123321
 1234321*/     
/*int n;
cin>>n;
int row;
while(row<=n)
{
    //print space
    int space=n-row;
    while(space>=0)
    {
        cout<<" ";
        space--;

    
    //print trangle
    int j;
    j=1;
    while(j<=row)
    {
        cout<<j;
        j++;
    }
    //print last trangle
    int k;
    k=row-1;
    while(k>0)
    {
        cout<<k;
        k--;
    }
   
} 
cout<<endl;
   row=row+1;
}
    return 0;
}*/
int i,j,count=0;
int n=5;
for(i=1;i<=n;i++)
{
    for(j=1;j<=i;j++)
    {cout<<count;
    count++;
    }
    cout<<endl;
}
return 0;
}