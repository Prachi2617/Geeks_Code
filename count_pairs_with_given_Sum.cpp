#include<bits/stdc++.h>
using namespace std;

int func(int arr[],int n, int k)
{
        unordered_map<int,int>mp;
        int i,ans=0;
        for(i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(i=0;i<n;i++)
        {
            if(mp[k-arr[i]])
            {
                ans=ans+mp[k-arr[i]];
            }
            if((k-arr[i])==arr[i])//if the same element satisfies pair condition
             ans--;
        }
        return ans/2;//because pairs are counted twice
}

int main()
{
    int t,n,k,i,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        ans=func(arr,n,k);
        cout<<"\nans-"<<ans<<endl;
    }
}
