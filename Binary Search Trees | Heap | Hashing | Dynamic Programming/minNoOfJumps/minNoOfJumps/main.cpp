#include<iostream>
#include<vector>
using namespace std;
int jumps(vector<int> &arr)
{
    if(arr.size()<=1)
        return 0;
    if(arr[0]==0)
        return -1;
    int n = arr.size();
    int jumps = 1;
    int reachable = 0;
    int curr = arr[0];
    for(int i=1;i<n;i++)
    {
        reachable = max(reachable, i+arr[i]);
        if(curr==i && i!=n-1)
        {
            jumps++;
            curr = reachable;
            reachable = -1;
        }
        if(curr==i && i!=n-1)
            return -1;
    }
    return jumps;
}
int main()
{
    int n;
    vector<int> arr;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        int v;
        cin>>v;
        arr.push_back(v);
    }
    cout<<jumps(arr);
    return  0;
}

