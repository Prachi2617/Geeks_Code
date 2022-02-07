// bottom up approach

class Solution{
public:


    /*
    int t[10001][100001];
    int func(int n,int arr[],int sum)
    {
        if(sum==0)
            return 1;
        if(n<=0 )
            return 0;

        if(t[n][sum]!=-1)
            return t[n][sum];
        if(arr[n]<=sum)
        {
            return t[n][sum]=(func(n-1,arr,sum-arr[n]) || func(n-1,arr,sum));
        }
        else if(arr[n]>sum)
            return t[n][sum]=func(n-1,arr,sum);
    }*/
    bool isSubsetSum(int N, int arr[], int sum)
    {
        int dp[N+1][sum+1];
        int i=0,j;
        for(j=0;j<sum+1;j++)
            dp[i][j]=0;
        for(j=0;j<N+1;j++)
            dp[j][i]=1;

        for(i=1;i<N+1;i++)
        {
            for(j=1;j<sum+1;j++)
            {
                if(arr[i-1]<=j)
                {
                    dp[i][j]=(dp[i-1][j-arr[i-1]] || dp[i-1][j]);
                }
                else
                dp[i][j]=dp[i-1][j];
            }
        }


        return dp[N][sum];

    }
};
