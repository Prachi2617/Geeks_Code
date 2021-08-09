class Solution
{
    public:

    //Function to detect cycle in an undirected graph.
    bool dfs(int src,int par, vector<int>adj[],vector<bool>&vis)
    {
        vis[src]=true;
        for(int i=0;i<adj[src].size();i++)
        {
            int child=adj[src][i];
            if(!vis[child])
            {
                if(dfs(child,src,adj,vis))
                    return true;
            }
            else if(child!=par)
                return true;
        }
        return false;
    }
	bool isCycle(int V, vector<int>adj[])
	{
	    vector<bool>vis(V,false);
	    int i;
	    for(i=0;i<V;i++)
	    {
	        if(!vis[i])
	        {
	            bool f=dfs(i,-1,adj,vis);
	            if(f)
	                return true;
	        }
	    }
	    return false;
	}
};
