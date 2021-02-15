#include <iostream>
using namespace std;
int minPlatformRequired(int arrival[], int departure[], int n)
{
   int i,j=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arrival[i]>arrival[j])
            {
                arrival[i]=arrival[i]+arrival[j];
                arrival[j]=arrival[i]-arrival[j];
                arrival[i]=arrival[i]-arrival[j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(departure[i]>departure[j])
            {
                departure[i]=departure[i]+departure[j];
                departure[j]=departure[i]-departure[j];
                departure[i]=departure[i]-departure[j];
            }
        }
    }
    int stationRequired=1, count=1;
    int k=1,l=0;
    while( k<n && l<n)
    {
        if(arrival[k]<=departure[l])
        {
            count++;
            k++;
        }
        else if(arrival[k]>departure[l] )
        {
            count --;
            l++;
        }
        if(count>stationRequired)
        {
            stationRequired=count;
        }
    }
    return stationRequired;
}
int main()
{
    int arrival[]={900, 940, 950, 1100, 1500, 1800};
    int departure[]={910, 1200, 1120, 1130, 1900, 2000};
    int n = sizeof(arrival) / sizeof(arrival[0]);
    cout<<"Minimun Required Platform::"<<minPlatformRequired(arrival, departure, n)<<endl;
    return 0;
}
