#include<bits/stdc++.h>
using namespace std;
//O(N) timecomplexity
class Solution{
  public:
    int minJumps(int arr[], int n)
    {
        int mxrch=arr[0];//how fare you can go
        int step=arr[0];//steps to reach mxrch
        int jump=1;//atleast one jump from 0th index
        if(n==1)
            return 0;
        else if(arr[0]==0)
            return -1;//if first element is 0 then we cannpt jump
        else
        {
            for(int i=1;i<n;i++)
            {
                if(i==n-1)
                    return jump;
                mxrch=max(mxrch,arr[i]+i);
                step--;
                if(step==0)
                {
                    jump++;
                    if(i>=mxrch)
                    {
                        return -1;
                    }
                    step=mxrch-i;
                }
            }
        }
    }
};
// O(n2) timecomplexity
class solution
{
    public:
        int min_jump(int arr[], int n)
        {
            int ans=0,i,mx,j,k;

            for(i=0;i<n;)
            {
                mx=0;
                if((i+arr[i])>=(n-1))
                    return ans+1;
                if(arr[i]<=0)
                    return -1;
                for(j=i+1;j<=(arr[i]+i);j++)
                {
                    if(arr[j]>=mx)
                    {
                        mx=arr[j];
                        k=j;
                        //cout<<"\nk- "<<k;
                    }
                }
                i=k;
                cout<<"\nk- "<<k<<endl;
                ans++;

            }
            return ans;
        }
};

int main()
{
    int t,n,i,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        solution obj;
        cout<<"\nans"<<obj.min_jump(a,n);
    }
}
