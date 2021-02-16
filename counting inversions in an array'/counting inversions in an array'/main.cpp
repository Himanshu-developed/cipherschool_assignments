#include<iostream>
using namespace std;
int mergeSort(int arr[],int left, int right,int arr1[]);
int mergeData(int arr[], int left, int right, int mid, int arr1[]);
int arrangeData(int arr[],int n)
{
    int arr1[n];
    return mergeSort(arr, 0, n-1, arr1);
}

int mergeSort(int arr[],int left, int right,int arr1[])
{
    int mid, count=0;
    if(left<right)
    {
        mid=(left+right)/2;
        count=count+mergeSort(arr, left, mid, arr1);
        count=count+mergeSort(arr, mid+1, right, arr1);
        count=count+mergeData(arr,left,right,mid+1,arr1);
    }
    return count;
}
int mergeData(int arr[], int left, int right, int mid, int arr1[])
{
        int count = 0;
        int i = left;
        int j = mid;
        int k = left;
        while ((i <= mid - 1) && (j <= right))
        {
            if (arr[i] <= arr[j])
            {
                arr1[k++] = arr[i++];
            }
            else
            {
                arr1[k++] = arr[j++];
                count = count + (mid - i);
            }
        }
        while (i <= mid - 1)
        {
            arr1[k++] = arr[i++];
        }
        while (j <= right)
        {
            arr1[k++] = arr[j++];
        }
        for (i = left; i <= right; i++)
    {
            arr[i] = arr1[i];
    }
     
        return count;
}
int main()
{
    int arr[]={1, 20, 6, 4, 5 };
    int n=sizeof(arr)/sizeof(int);
    cout<<"Total no of Inversions are::"<<arrangeData(arr, n)<<endl;
    return 0;
}
