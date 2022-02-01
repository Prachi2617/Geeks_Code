bool isAnagram(string a, string b)
    {
        map<char,int>mp;
        int j;
        if(a.size()!=b.size())
        {
            return false;
        }
        for(j=0;j<a.size();j++)
        {
            mp[a[j]]++;
        }
        for(j=0;j<b.size();j++)
        {
            if(mp.find(b[j])==mp.end())
            {
                return false;
            }
            mp[b[j]]--;
            if(mp[b[j]]==0)
            {
                mp.erase(b[j]);
            }
        }
        return true;
    }
