	int maxSumIS(int arr[], int n)
	{
	    int lis[n];
        int i,j;
        lis[n-1]=arr[n-1];
        for(i=n-2;i>=0;i--)
        {
            lis[i]=arr[i];
            for(j=i+1;j<n;j++)
            {
                if(arr[i]<arr[j] && lis[i]<lis[j]+arr[i])
                {
                   lis[i]=lis[j]+arr[i];

                }
            }
        }
        return *max_element(lis,lis+n);
	}
