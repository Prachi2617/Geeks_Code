class Solution
{
    public:
    //Function to find minimum number of pages.

    bool solve(int A[],int N,int mid, int M)
    {
        int sum=0;
        int stud=1;
        for(int i=0;i<N;i++)
        {
            if(A[i]>mid)
                return false;
            if((sum+A[i])>mid)
            {
                sum=A[i];
                stud++;
                if(stud>M)
                    return false;
            }
            else
                sum+=A[i];
        }
        return true;
    }
    int findPages(int A[], int N, int M)
    {
        int l=0;
        int s=0,ans=0;
        int u;
        for(int i=0;i<N;i++)
        {
            s+=A[i];
        }
        u=s;
        while(l<=u)
        {
            int mid=(l+u)/2;
            if(solve(A,N,mid,M))
            {
                u=mid-1;
                ans=mid;
            }
            else
            {
                l=mid+1;
            }
        }
        return ans;
    }
};
