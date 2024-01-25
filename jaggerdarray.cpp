#include<iostream>
using namespace std;
// jaggerd array 
int main()
{ 
    // it not taken input from user is direct input
    int row=3,sizes[]={4,3,2},n=3;
     int **arr=new int*[row];
     for(int i=0;i<n;i++)
     {
        *(arr+i)=new int[sizes[i]];//creating column
     }
     // input form user
     for(int i=0;i<row;i++)
     {
        for(int j=0;j<sizes[i];j++)
          cin>>arr[i][j];
     }
    //output array
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<sizes[i];j++)
        {cout<<arr[i][j];}
        cout<<endl;
    }
    //delete array
    for(int i=0;i<row;i++)
    {
        delete []arr[i];
    }
    delete []arr;
    return 0;
}