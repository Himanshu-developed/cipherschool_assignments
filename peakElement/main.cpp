
#include <iostream>
using namespace std;
class peakElement
{
public:
int getPeakElement(int arr[], int low, int high, int n)
{

    int mid=low+(high-low)/2;




        if((mid==0||arr[mid-1]<=arr[mid])&&(mid==n-1||arr[mid+1]<=arr[mid]))
        {
            return mid;
        }
        else if(mid>0 && arr[mid-1]> arr[mid])
        {
            getPeakElement(arr,low,mid-1,n);
        }
        else
        {
            getPeakElement(arr,mid+1,high,n);
        }


}
int getPeak(int arr[],int n)
{
    return getPeakElement(arr,0,n-1,n);
}

};

int main() {
   peakElement obj;
   int n=0, arr[n],i;
   cout<<"Enter the size of array::";
   cin>>n;
   cout<<"Enter the elements of array::"<<endl;
   for(i=0;i<n;i++)
   {
       cin>>arr[i];


   }

   {
       cout<<"The peak point element index is::"<<obj.getPeak(arr,n);
   }


    return 0;
}
