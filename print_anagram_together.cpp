class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list)
    {
        map<string,vector<string>>mp;
        for(int i=0;i<string_list.size();i++)
        {
            string curr=string_list[i];
            sort(curr.begin(),curr.end());
            mp[curr].push_back(string_list[i]);
        }
        vector<vector<string>>ans;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            ans.push_back(it->second);
        }
            return ans;
    }
};
