class Solution{
public:
    int dp[1001][1001];

    int func(int N,int arr[],int s)
    {
        if(s==0)
            return 1;
        if(N<=0)
        {
            return 0;
        }
        if(dp[N][s]!=-1)
            return dp[N][s];
        if(arr[N]<=s)
            return dp[N][s]=(func(N-1,arr,s-arr[N]) || func(N-1,arr,s));
        else if(arr[N]>s)
            return dp[N][s]=func(N-1,arr,s);
    }

    int equalPartition(int N, int arr[])
    {
        int s=0;
        for(int i=0;i<N;i++)
        {
            s+=arr[i];
        }
        if(s%2!=0)
            return 0;
        s=s/2;
        dp[N][s];
        memset(dp,-1,sizeof(dp));
        return func(N-1,arr,s);
    }
};
