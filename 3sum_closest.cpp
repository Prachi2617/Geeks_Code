//time complexity- O(n2)
//space complexity- O(1)
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target)
    {
       int n=nums.size();
        //vector<vector<int>>ans;
        //vector<int>dummy;
        int i,j,k,ans;
        //k=n-1;
        ans=INT_MAX;
        int ans1=0;
        sort(nums.begin(),nums.end());
        for(i=0;i<n-2;i++)
        {

            j=i+1;
            k=n-1;
            while(j<k)
            {
                int s = nums[i]+nums[j]+nums[k];
                if(abs(s-target)<abs(ans))
                {
                    ans=s-target;

                    ans1=s;
                }
                else if(s<target)
                    j++;
                else
                    k--;
            }
        }
        return ans1;
    }
};
