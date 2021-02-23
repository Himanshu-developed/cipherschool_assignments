#include<iostream>
using namespace::std;
int getSum(int arr[], int n)
{
int data = arr[0];
int sum = 0;
int result;
int i;
for (i = 1; i < n; i++)
{
    result = (data > sum)? data: sum;
    data = sum + arr[i];
    sum = result;
}
return ((data > sum)? data : sum);
}
int main()
{
int arr[] = {5, 5, 10, 100, 10, 5};
int n = sizeof(arr) / sizeof(arr[0]);
cout<<"SUM::"<<getSum(arr,n)<<endl;
return 0;
}

