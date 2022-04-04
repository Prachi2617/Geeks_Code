int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        int dp[n+1][m+1];
        int i,j;
        for( i=0;i<m+1;i++)
            dp[0][i]=0;
        for(i=0;i<n+1;i++)
            dp[i][0]=0;
        for(i=1;i<n+1;i++)
        {
            for(j=1;j<m+1;j++)
            {
                if(S1[i-1]==S2[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=0;
                }
            }
        }
        int ans=0;
        for(i=0;i<n+1;i++)
        {
            for(j=0;j<m+1;j++)
            {
                if(dp[i][j]>ans)
                    ans=dp[i][j];
            }
        }
        return ans;
    }
