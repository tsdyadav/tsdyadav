#include<iostream>
using namespace std;
//dynamic for 1 -D array
/*int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int *arr=new int[n];
    //input data in dynamic array
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element in "<<i+1<<endl;
        cin>>arr[i];
    }
    //output data of dynamic array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    //delete dynamic array
    delete []arr;
    return 0;
}*/
//2-D dynamic array memory allocation
int main()
{int row,col;
cout<<"Enter the Row of 2-D array"<<endl;
cin>>row;
cout<<"Enter the column of 2-D array"<<endl;
cin>>col;
   int **arr=new int*[row];
for(int i=0;i<row;i++)
{
    arr[i]=new int[col];
}
//input in 2-D dynamic array
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        cin>>arr[i][j];
    }
}
//output in 2-D dynamic array
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        cout<<arr[i][j];
    }
    cout<<endl;
}
    return 0;
}