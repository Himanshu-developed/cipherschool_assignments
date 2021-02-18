#include<iostream>
using namespace std;
int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
int main()
{
    int n;
    cout<<"Enter value to print series::";
    cin>>n;
    cout<<"The series is::"<<endl;
    cout<<fib(n)<<endl;
    getchar();
    return 0;
}
