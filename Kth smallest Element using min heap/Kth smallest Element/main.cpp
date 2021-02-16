#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int findKthSmallest(vector<int>&arr, int k)
{
    priority_queue<int,vector<int>,greater<>>pq(arr.begin(), arr.end());
    while (--k) {
        pq.pop();
    }
    return pq.top();
}
 
int main()
{
    vector<int> arr = { 7, 4, 6, 3, 9, 1 };
    cout << "k'th smallest array element is " <<findKthSmallest(arr, 3)<<endl;
 
    return 0;
}



