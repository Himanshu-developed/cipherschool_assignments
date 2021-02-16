#include <iostream>
using namespace std;
int kthSmallestElement(int arr[], int n, int k)
{
    sort(arr,arr+n);
    return arr[k-1];
}
int main()
{
    int arr[]={23,12,11,13,15,8,7,23};
    int n=sizeof(arr)/sizeof(n);
    cout<<"The kth Smallest element is::"<<kthSmallestElement(arr, n, 4)<<endl;
    return 0;
}
