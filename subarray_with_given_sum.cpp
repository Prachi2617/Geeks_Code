 vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int>ans;
        int i,sum=0,j=0;
        for(i=0;i<n;i++)
        {
            sum+=arr[i];
            while(sum>s)
            {
                sum=sum-arr[j];
                j++;
            }
            if(sum==s)
            {
                ans.push_back(j+1);
                ans.push_back(i+1);
                return ans;
            }
        }
        ans.push_back(-1);
        return ans;
    }
