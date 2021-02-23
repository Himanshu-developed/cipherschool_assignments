#include<iostream>
#include <string>
using namespace std;
int max (int x, int y)
{
    return (x > y)? x : y;
    
}
int lowestPalindromic(char *arr, int i, int j)
{
if (i == j)
{
    return 1;
}
if (arr[i] == arr[j] && i + 1 == j)
{
    return 2;
}
if (arr[i] == arr[j])
{
    return lowestPalindromic (arr, i+1, j-1) + 2;
}
return max( lowestPalindromic(arr, i, j-1), lowestPalindromic(arr, i+1, j) );
}
int main()
{
    char arr[] = "the Quick brown Fox jumps over right the lazy dog";
    int n = strlen(arr);
    cout << "The length of the LPS is "<< lowestPalindromic(arr, 0, n-1)<<endl;
    return 0;
}


