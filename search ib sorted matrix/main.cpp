#include<iostream>
using namespace std;
int searchElement(int arr[4][4],int n, int element)
{
    if(n==0)
    {
        return -1;
    }
    int m = arr[0][0], k = arr[n - 1][n - 1];
    if (element < m || element > k)
    {
        return -1;
    }
    int i = 0, j = n - 1;
    while (i < n && j >= 0)
    {
        if (arr[i][j] == element)
        {
            cout << "Element Found at Position:: "<< i << ", " << j;
            return 1;
        }
        if (arr[i][j] > element)
        {
           j--;
        }

        else
        {
           i++;
        }

    }

    cout << " Element not found";
    return 0;
}
int main()
{
    int arr[4][4]={{2,4,6,8},{3,6,9,12},{4,8,12,16},{5,10,15,20}};
    searchElement(arr,4,12);
    return 0;
}

