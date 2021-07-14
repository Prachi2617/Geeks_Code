class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)
    {
        map<int, int>mp;
        int i;
        if(n>=m)
        {

            for(i=0;i<m;i++)
            {
                if(mp[a[i]])
                    mp[a[i]]++;
                else
                    mp[a[i]]=1;
                if(mp[b[i]])
                    mp[b[i]]++;
                else
                    mp[b[i]]=1;
            }
            for(;i<n;i++)
            {
                if(mp[a[i]])
                    mp[a[i]]++;
                else
                    mp[a[i]]=1;
            }
            return mp.size();
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(mp[a[i]])
                    mp[a[i]]++;
                else
                    mp[a[i]]=1;
                if(mp[b[i]])
                    mp[b[i]]++;
                else
                    mp[b[i]]=1;
            }
            for(;i<m;i++)
            {
                if(mp[b[i]])
                    mp[b[i]]++;
                else
                    mp[b[i]]=1;
            }
            return mp.size();
        }
    }
};
