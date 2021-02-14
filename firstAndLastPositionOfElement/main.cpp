#include<iostream>
using namespace std;
int firstOccurence(int arr[], int low, int high, int n, int element)
{
    if(high>=low)
    {
       int mid=low+(high-low)/2;
        if((mid==0||element>arr[mid-1]) && arr[mid]==element)
        {
            return mid;
        }
        else if(arr[mid]<element)
        {
          return  firstOccurence(arr,mid+1,high,n,element);
        }
        else
        {
           return firstOccurence(arr,low,mid-1,n,element);
        }

    }
    return -1;
}

    int lastOccurence(int arr[],int low, int high, int n, int element)
    {
        if(high>=low)
        {
           int  mid=low+(high-low)/2;
            if((mid == n - 1 || element < arr[mid + 1]) && arr[mid] == element)
            {
                return mid;
            }
            else if(arr[mid]>element)
            {
               return lastOccurence(arr,low,mid-1,n,element);
            }
            else
            {
              return  lastOccurence(arr,mid+1,high,n,element);
            }


       }
       return -1;
    }
    int main()
    {
        int arr[]={2,2,5,5,5,8,8,9,10};
       int n=sizeof(arr)/sizeof(arr[0]);
        cout<<firstOccurence(arr,0,n-1,n,5)<<endl;
        cout<<lastOccurence(arr,0,n-1,n,5)<<endl;
        return 0;
    }
