 int findOnce(int arr[], int n)
    {
        int l=0,h=n-1,ans,mid;
        while(l<=h)
        {


            mid=(l+h)/2;
            if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1])
                return arr[mid];
            if(mid%2==0)
            {
                if(arr[mid]==arr[mid+1])
                {
                    l=mid+1;
                }
                else
                    h=mid-1;
            }
            else
            {
                if(arr[mid]==arr[mid-1])
                {
                    l=mid+1;
                }
                else
                    h=mid-1;
            }
        }
       /*int i,x=0;
       for(i=0;i<n;i++)
       {
           x=x^arr[i];
       }
       return x;*/
    }
