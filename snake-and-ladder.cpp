class Solution{
public:
    int minThrow(int N, int arr[])
    {
        queue<pair<int ,int>>q;
        map<int,int>mp;
        for(int i=0;i<(2*N);i=i+2)
        {
            mp[arr[i]]=arr[i+1];
        }
        vector<bool>V(31,false);
        q.push({1,0});
        V[1]=true;
        while(!q.empty())
        {
            auto c=q.front();
            q.pop();

            for(int i=c.first+1 ;i<=(c.first+6) && i<=30;i++)
            {

                if(!V[i])
                {
                    if(mp[i])
                    {
                        q.push({mp[i],c.second+1});
                    }
                    else
                    {
                        q.push({i,c.second+1});
                    }
                    V[i]=true;
                }
                if(i==30)
                {
                    return c.second+1;
                }
            }
        }
    }
};
