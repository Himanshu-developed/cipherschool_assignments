#include <iostream>
using namespace std;
void mergeArrays(int arr[],int n,int arr1[], int m,int arr2[])
{
    int i = 0, j = 0,k=0;
    while(i<n && j<m)
    {
        if(arr[i]>arr1[j])
        {
            arr2[k]=arr1[j];
            j++;
            k++;
        }
        else if(arr[i]==arr1[j])
        {
            arr2[k]=arr[i];
            i++;
            k++;
            arr2[k]=arr1[j];
            j++;
            k++;
        }
        else
        {
            arr2[k]=arr[i];
            i++;
            k++;
        }
    }
    while(i<n)
    {
        arr2[k]=arr[i];
        i++;
        k++;
    }
    while(j<m)
    {
        arr2[k]=arr1[j];
        k++;
        j++;
    }
}
int main()
{
    int arr[]={12,14,15,18,20,25};
    int n=sizeof(arr)/sizeof(arr[0]);
    int arr1[]={13,15,17,19,34};
    int m=sizeof(arr1)/sizeof(int);
    int arr2[m+n];
    mergeArrays(arr,n, arr1, m,arr2);
    for(int i=0;i<m+n;i++)
    {
        cout<<arr2[i]<<endl;
    }
    return 0;
}
