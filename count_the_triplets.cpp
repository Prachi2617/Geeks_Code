time complexity- O(n^2)
space=1

int countTriplet(int arr[], int n)
	{

	    int i,j,k,ans=0;
	    sort(arr,arr+n);
	    for(i=n-1;i>=0;i--)
	    {
	        j=0;
	        k=i-1;
	        while(j<k)
	        {
	            if(arr[i]==(arr[j]+arr[k]))
	            {
	                ans++;
	                j++;
	            }
	            else if (arr[i] > arr[j] + arr[k])
                    j++;
                else
                    k--;
	        }
	    }
	    return ans;
	}
