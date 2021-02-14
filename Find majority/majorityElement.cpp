#include<iostream>
using namespace std;
void majorityElement(int arr[], int n)
{
	int pos=-1,i,j, flag=0;
	for(i=0;i<n;i++)
	{
	    int count=0;
		for(j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		
		}
			if (count>flag)
			{
				flag=count;
				pos=i;
		
			}
	
	}
		if(flag > n/2)
		{
			cout<<"Most frequently occured element is::"<<arr[pos];
		}
		else 
		{
			cout<<"No Element Found";
		}
}
int main()
{
	int n, arr[100],i;
	cout<<"Enter the size of array::";
	cin>>n;
	cout<<"Enter the element of array::";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	majorityElement( arr,n);
	return 0;
}
