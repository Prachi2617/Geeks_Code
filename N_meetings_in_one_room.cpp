
//Expected Time Complexity : O(N*LogN)
//Expected Auxilliary Space : O(N)
static bool comp(pair<int,int>a,pair<int,int>b)
    {
        if(a.second==b.second)
            return a.first<b.first;
        return a.second<b.second;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>>v(n);
        int i;
        for(i=0;i<n;i++)
        {
            v[i]={start[i],end[i]};
        }
        sort(v.begin(),v.end(),comp);
        i=0;
        int j=1;
        int ans=1;
        while(j<n)
        {
            if(v[i].second<v[j].first)
            {
                ans++;
                i=j;
                j++;
            }
            else
                j++;
        }
        return ans;
    }
