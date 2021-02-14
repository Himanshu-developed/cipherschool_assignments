#include<iostream>
using namespace std;
int missingNumber(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(i==n-1)
        {
           break;
        }
        if((arr[i+1]-arr[i])!=1)
        {
            cout<<"The Missing Element is::"<<arr[i]+1<<endl;
        }

    }
}
int main()
{
    int arr[]={4,5,6,7,9,10,11,13};
    int n=sizeof(arr)/sizeof(int);
    missingNumber(arr,n);
    return 0;
}
