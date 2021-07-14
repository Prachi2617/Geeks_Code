class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        map<int,int>mp;
        vector<int>ans;
          //map<int,int>mp2;
        int i;
        for(i=0;i<nums1.size();i++)
        {
            if(mp[nums1[i]])
                mp[nums1[i]]++;
            else
                mp[nums1[i]]=1;
        }
        for(i=0;i<nums2.size();i++)
        {
            if(mp[nums2[i]])
            {
                ans.push_back(nums2[i]);
              mp[nums2[i]]=0;
            }
        }
        return ans;
    }
};
