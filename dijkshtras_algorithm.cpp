class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    int minn(vector<int>dist,vector<int>st,int V)
    {
        int i,mn,id;
        mn=INT_MAX;
        for(i=0;i<V;i++)
        {
            if(!st[i] && dist[i]<mn)
            {
                mn=dist[i];
                id=i;
            }
        }
        return id;
    }
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        vector<int>ans;
        vector<int>dist(V,INT_MAX);
        vector<int>st(V,0);
        dist[S]=0;
        int i,j;
        for(i=0;i<V;i++)
        {
            int u=minn(dist,st,V);
            st[u]=1;
            for(j=0;j<adj[u].size();j++)
            {
              int val=adj[u][j][0];
              int wt=adj[u][j][1];
              if(!st[val] && (dist[u]+wt)<dist[val])
                {
                    dist[val]=dist[u]+wt;
                }
            }

        }
        return dist;
    }
};
