#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    int sum=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n,greater<int>());
    int cnt=0,sum1=0;
    for(i=0;i<n;i++)
    {
        sum1+=arr[i];
        sum-=arr[i];
        cnt++;
        if(sum1>sum)
        {
            break;
        }
    }
    cout<<"\nfinal ans-> "<<cnt;
}
