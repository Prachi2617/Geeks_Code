// Time Complexity: O(V + E)
//Auxiliary Space: O(V)


class Solution {
public:
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
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites)
    {
        vector<int>adj[numCourses];
        int i;
        int n=prerequisites.size();
        for(i=0;i<n;i++)
        {
            int j=prerequisites[i][1];
            int k=prerequisites[i][0];
            adj[j].push_back(k);
        }
       vector<bool>vis(numCourses,0);
	   vector<bool>order(numCourses,0);
	   for(int i=0;i<numCourses;i++)
	   {
	       if(!vis[i])
	       {
	           bool f=dfs(i,vis,order,adj);
	           if(f)
	            return false;
	       }
	   }
      return true;
    }
};
