#include<iostream>
using namespace std;
class waterStored
{
    public:
int rainWater(int arr[], int n)
{
    int left[n], right[n], count=0,i;
    left[0]=arr[0];
    for (int i=1;i<n;i++)
    {
        left[i]=max(left[i-1],arr[i]);
    }
    right[n-1]=arr[n-1];
    for(i=n-2;i>=0;i--)
    {
        right[i]=max(right[i+1],arr[i]);
    }
    for(i=0;i<n;i++)
    {

        count=count+min(left[i],right[i])-arr[i];
    }
    return count;

}
};
int main()
{
    int n=0, arr[100],i;
    waterStored obj;
    cout<<"Enter the no of buildings in the locality::";
    cin>>n;
    cout<<"Enter the height of buildings"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   cout<<"Maximum water stored::"<< obj.rainWater(arr,n);
    return 0;
}
