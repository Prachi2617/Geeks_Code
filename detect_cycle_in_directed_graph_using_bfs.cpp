	bool isCyclic(int V, vector<int> adj[])
	{
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
	    int cnt=0;
	    while(!q.empty())
	    {
	        int curr=q.front();
	        q.pop();
	        for(i=0;i<adj[curr].size();i++)
	        {
	            in[adj[curr][i]]--;
	            if(in[adj[curr][i]]==0)
	                q.push(adj[curr][i]);
	        }
	        cnt++;
	    }
	    if(cnt!=V)
	        return true;
	   else
	    return false;

	}
