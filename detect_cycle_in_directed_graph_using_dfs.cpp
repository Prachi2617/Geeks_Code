class Solution
{
    public:
	//Function to detect cycle in a directed graph.
	bool dfs(int src,vector<bool>&vis,vector<bool>&order,vector<int>adj[])
	{
	    vis[src]=1;
	    order[src]=1;
	    for(int i=0;i<adj[src].size();i++)
	    {
	        int child=adj[src][i];
	        if(!vis[child])
	        {
	            if(dfs(child,vis,order,adj))
	                return true;
	        }
	        else if(order[child])
	            return true;
	    }
	    order[src]=0;
	    return false;
	}
	bool isCyclic(int V, vector<int> adj[])
	{
	   vector<bool>vis(V,0);
	   vector<bool>order(V,0);
	   for(int i=0;i<V;i++)
	   {
	       if(!vis[i])
	       {
	           bool f=dfs(i,vis,order,adj);
	           if(f)
	            return true;
	       }
	   }
	   return false;
	}
};
