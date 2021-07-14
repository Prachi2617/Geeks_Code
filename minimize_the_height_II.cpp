class Solution {
  public:
    int getMinDiff(int arr[], int n, int k)
    {
        int i,minn,maxx,result;
        sort(arr,arr+n);
        result=arr[n-1]-arr[0];
        for(i=1;i<n;i++)
        {
            if(arr[i]>=k &&arr[n-1]>=k)
            {
                maxx=max(arr[i-1]+k,arr[n-1]-k);
                if(arr[i]-k<0)
                    continue;
                minn=min(arr[0]+k,arr[i]-k);
                result=min(result,maxx-minn);
            }
        }
        return result;
    }
};
