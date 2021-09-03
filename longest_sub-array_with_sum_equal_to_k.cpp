// naive time complexity - O(n2)
//here time complexity- O(n)
//space -O(n)
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K)
    {
        map<int,int>mp;
        int i, ans, sum=0;
        ans=0;
        for(i=0;i<N;i++)
        {
            sum+=A[i];
            if(sum==K)
                ans=i+1;
            if(mp.find(sum)==mp.end())
                mp[sum]=i;
            if(mp.find(sum-K)!=mp.end())
            {
                if((i-mp[sum-K])>ans)
                    ans=i-mp[sum-K];
            }

        }
        return ans;
    }

};
