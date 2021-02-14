#include<iostream>
using namespace std;
int alternativeSort(int arr[], int n)
{
    int i,j,k,l;
    for(i=0;i<n;i++)
    {
        for(j=i+2;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
            j++;
        }
        i++;
    }
     for(k=1;k<n;k++)
    {
        for(l=k+2;l<n;l++)
        {
            if(arr[k]>arr[l])
            {
                swap(arr[k],arr[l]);
            }
            l++;
        }
        k++;
    }
}
int main()
{
    int arr[20],n,i;
    cout<<"Enter the no of element you want to punch in array::";
    cin>>n;
    cout<<"Enter the Elements of Array::"<<endl;
    for( i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    alternativeSort(arr,n);
    cout<<"Alternatively sorted array is::"<<endl;
     for( i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;

}
