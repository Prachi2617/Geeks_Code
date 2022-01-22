int longestSubsequence(int n, int a[])
    {
        int lis[n];
        int i,j;
        lis[n-1]=1;
        for(i=n-2;i>=0;i--)
        {
            lis[i]=1;
            for(j=i+1;j<n;j++)
            {
                if(a[i]<a[j] && lis[i]<lis[j]+1)
                {
                   lis[i]=lis[j]+1;
                }
            }
        }
        return *max_element(lis,lis+n);
    }
