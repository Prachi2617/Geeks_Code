//below is the dfs approach of topological sort	
void dfs(int src,vector<int>adj[],stack<int>&st,vector<int>&vis)
	{
	    vis[src]=1;
	    for(int i=0;i<adj[src].size();i++)
	    {
	        int child=adj[src][i];
	        if(!vis[child])
	            dfs(child,adj,st,vis);
	    }
	    st.push(src);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int> ans;
	    vector<int>vis(V,0);
	    int i;
	    stack<int>st;
	    for(i=0;i<V;i++)
	    {
	        if(!vis[i])
	            dfs(i,adj,st,vis);
	    }
	    while(!st.empty())
	    {
	        int tt=st.top();
	        ans.push_back(tt);
	        st.pop();
	    }
	    return ans;
	}
//below is the bfs approach of topological sort
vector<int> topoSort(int V, vector<int> adj[])
	{
	    vector<int>ans;
	    vector<int>in(V,0);
	    queue<int>q;
	    int i,j;
	    for(i=0;i<V;i++)
	    {
	        for(j=0;j<adj[i].size();j++)
	        {
	            in[adj[i][j]]++;
	        }
	    }
	    for(i=0;i<V;i++)
	    {
	        if(in[i]==0)
	            q.push(i);
	    }
	    while(!q.empty())
	    {
	        int curr=q.front();
	        q.pop();
	        ans.push_back(curr);
	        for(j=0;j<adj[curr].size();j++)
	        {
	            in[adj[curr][j]]--;
	            if(in[adj[curr][j]]==0)
	                q.push(adj[curr][j]);
	        }
	    }
	    return ans;
	}
