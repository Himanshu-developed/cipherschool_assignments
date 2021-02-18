#include<iostream>
#include<string>
using namespace std;
int getCount(char data[], int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    if (data[0] == '0')
    {
        return 0;
    }
    int count = 0;
    if (data[n - 1] > '0')
    {
        count = getCount(data, n - 1);
    }
    if (data[n - 2] == '1'|| (data[n - 2] == '2'&& data[n - 1] < '7'))
    {
        count =count + getCount(data, n - 2);
    }
 
    return count;
}
int getCodeCount(char data[], int n)
{
    if (n == 0 || (n == 1 && data[0] == '0'))
        return 0;
    return getCount(data, n);
}
int main()
{
    char data[]="1234";
    int n= strlen(data);
    cout<<"TOTAL NO OF CODES GENERATED::"<<getCodeCount(data,n)<<endl;
    return 0;
    
}
