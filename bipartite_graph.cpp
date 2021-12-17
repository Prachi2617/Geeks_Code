bool dfs(vector<int>adj[],int N,int src,vector<int>&col,int c)
    {
        col[src]=c;
        for(int i=0;i<adj[src].size();i++)
	    {
	        int child =adj[src][i];

            if(col[adj[src][i]]==-1)  //Unvisited node
            {

                 if(dfs(adj,N,child,col,1-c)==false)
	                return false;
            }
            else if(col[child]==col[src]) //Odd-cycle
                    return false;
	    }

	    return true;
    }
    bool bfs(vector<int>adj[],int N,int src,vector<int>& color,int c)
    {
        queue<int> q;
        q.push(src);
        color[src] = 1;
        //Process current graph component using BFS
        while(!q.empty())
        {
            int curr = q.front();
            q.pop();
            for(int j=0;j<adj[curr].size();j++)
            {
                int child =adj[curr][j];
                if(color[child]==color[curr]) //Odd-cycle
                    return false;
                if(color[child]==-1)  //Unvisited node
                {
                    color[child] = 1-color[curr];
                    q.push(child);
                }
            }
        }
        return true;
    }

	bool isBipartite(int V, vector<int>adj[])
	{
	    int i;
	    vector<int> color(V,-1);
        for( i=0;i<V;++i)
        {
            if(color[i]==-1)
            {
                if(!dfs(adj,V,i,color,1))
                    return false;
            }
        }
        return true;
	}
