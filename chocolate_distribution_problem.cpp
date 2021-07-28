#include<bits/stdc++.h>
using namespace std;

long long findMinDiff(vector<long long> a, long long n, long long m)
{
        long long ans=INT_MAX;
        sort(a.begin(),a.end());
        long long i,j;
        for(i=0;i<n;i++)
        {
            j=i+m-1;

            if(j>=n)
             {

                 return ans;
             }
            if((a[j]-a[i])<ans)
            {
                ans=a[j]-a[i];

            }
        }
        return ans;
}

int main()
{
    long long t,n,m,x,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<long long>arr;
        for(i=0;i<n;i++)
        {
            cin>>x;
            arr.push_back(x);
        }
        cin>>m;
        long long ans=findMinDiff(arr,n,m);
        cout<<"\n"<<ans<<endl;
    }
    return 0;
}
