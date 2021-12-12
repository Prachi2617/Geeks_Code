//time complexity= O(m*n)
long long int dp[1000][1000];
    long long int solve(int a[],int m,int n)
    {
        if(m ==-1 && n>0)
            return 0;
        if(n<0)
            return 0;
        if(n==0)
            return 1;
        if(dp[m][n]!=(-1))
            return dp[m][n];
        return dp[m][n]=solve(a,m,n-a[m]) + solve(a,m-1,n);
    }
    long long int count(int S[], int m, int n)
    {
        dp[m][n+1];
        int i, j;
        for(i=0;i<m;i++)
        {
            for(j=0;j<=n;j++)
                dp[i][j]=-1;
        }
        return solve(S,m-1,n);
    }
};
