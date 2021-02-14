#include<iostream>
using namespace std;
int main()
{
  int *arr=NULL,n,i;
  cout<<"Enter the size of array::";
  cin>>n;
  arr=new int[n];
  for(i=0;i<n;i++)
  {
      arr[i]=0;
  }
  cout<<"Enter the Elements of Array::"<<endl;
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   cout<<"Entered  Elements of Array is::"<<endl;
   for(i=0;i<n;i++)
   {
       cout<<arr[i]<<endl;
   }
   delete [] arr;
   arr=NULL;


}
