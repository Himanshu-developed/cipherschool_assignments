#include<iostream>
using namespace std;
int getPath( int n, int m)
{
    if(m==1 || n==1)
    {
        return 1;
    }
    return getPath(n-1,m)+getPath(n,m-1);
}
int main()
{
    int m,n;
    cout<<"Enter no of Rows::";
    cin>>n;
    cout<<"Enter the no of columns::";
    cin>>m;
    cout<<"Total Possible paths is::"<<getPath(n, m)<<endl;
    return 0;
    
}

