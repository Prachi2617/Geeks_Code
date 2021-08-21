//O(n2) time complexity
//O(1) Space complexity

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>dummy;
        int i,j,k;
       // k=n-1;
        sort(nums.begin(),nums.end());
        for(i=0;i<n;i++)
        {
            if(nums[i]>0)
                break;
            if (i > 0 and nums[i] == nums[i-1]) continue;
            j=i+1;
            k=n-1;
            while(j<k)
            {
                int s = nums[i]+nums[j]+nums[k];
                if(s==0)
                {
                    dummy.push_back(nums[i]);
                    dummy.push_back(nums[j]);
                    dummy.push_back(nums[k]);
                    ans.push_back(dummy);
                    dummy.clear();
                    int last_left = nums[j], last_right = nums[k];
				// we have seen this number & combo before; skip
				while (j < k && nums[j] == last_left) j++;
				while (j < k && nums[k] == last_right) k--;
                }
                else if(s<0)
                    j++;
                else
                    k--;
            }
        }
        return ans;
    }
};
