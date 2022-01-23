	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n)
	{
	    int i;
	    int dp[n];
	    dp[0]=arr[0];
	    dp[1]=arr[1];
	    dp[2]=arr[0]+arr[2];
	    for(i=3;i<n;i++)
	    {
	        dp[i]=arr[i]+max(dp[i-2],dp[i-3]);
	    }
	    return max(dp[n-1],dp[n-2]);
	}
