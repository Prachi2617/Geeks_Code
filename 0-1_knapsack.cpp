int knapsack(int W, int wt[], int val[], int n,int t[][1002])
    {
        if(n==0 || W ==0)
            return 0;
        if(t[n][W]!=-1)
            return t[n][W];
        if(wt[n-1]>W)
            return t[n][W]=knapsack(W,wt,val,n-1,t);
        else if(wt[n-1]<=W)
            return t[n][W]=max((val[n-1]+knapsack(W-wt[n-1],wt,val,n-1,t)),knapsack(W,wt,val,n-1,t));
    }
    int knapSack(int W, int wt[], int val[], int n)
    {
        int t[1002][1002];
        memset(t, -1, sizeof(t));
        return knapsack(W, wt, val,  n,  t);
    }
