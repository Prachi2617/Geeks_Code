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
