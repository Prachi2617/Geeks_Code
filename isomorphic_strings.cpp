//incase of map , we can use integer array to store char in ascii form

class Solution {
public:
    bool isIsomorphic(string s, string t)
    {
        int n, m,i;
       n=s.size();
       m=t.size();
       if(n!=m)
        return false;
       map<char,char>mp1;
       map<char,char>mp2;
       for(i=0;i<n;i++)
       {
           if(!mp1[s[i]] && !mp2[t[i]])
           {
               mp1[s[i]]=t[i];
               mp2[t[i]]=s[i];
           }
           else if(mp1[s[i]]!=t[i])
            return false;
       }
       return true;
    }
};
