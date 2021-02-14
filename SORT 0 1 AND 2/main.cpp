#include<iostream>
using namespace std;
int swapValue(int a, int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
int sortValue(int arr[], int n)
{
    int left=0,right=n-1,mid=0;
    while(mid<=right)
    {
        switch(arr[mid])
        {
            case 0: swap(arr[left++], arr[mid++]);
                    break;
            case 1: mid++;
            break;
            case 2:swap(arr[right--],arr[mid]);
            break;
        }
    }

}

int main()
{
    int arr[]={0,1,2,0,0,1,2,2,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The entered element is::"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    sortValue(arr,n);
    cout<<"Sorted array is::"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
