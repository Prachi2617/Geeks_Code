long long trappingWater(int arr[], int n)
    {
        long long left=0,right=0,l,h;
        long long ans=0;
        l=0;
        h=n-1;
        while(l<h)
        {
            if(arr[l]<arr[h])
            {
                if(arr[l]>left)
                    left=arr[l];
                else
                    ans+=left-arr[l];
                l++;
            }
            else
            {
                if(arr[h]>right)
                    right=arr[h];
                else
                    ans+=right-arr[h];
                h--;
            }
        }
        return ans;
    }
