We have to use BFS here because BFS works in parallel for all the approachable path and so whenever we reach the destination with any path then that first path will always be minimum. And this is why we have to use BFS as it works in parallel.
And we can not use DFS here because with DFS we will keep on moving in depth till we either reach the destination or we visit all the cells and no more cells to visit. And so then we will backtrack and then we will try another path and with that another path suppose we are able to reach then we can not be sure that this is path is minimum path only. Because DFS does not work in parallel. And so if we are using DFS then we have to use traverse all the possible paths and then only we can select minimum out of all of them.
But with BFS first path with which we reach destination is always be the minimum path.
class Solution
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    int x1=KnightPos[0];
	    int y1=KnightPos[1];
	    int x2=TargetPos[0];
	    int y2=TargetPos[1];
	    int vis[1000][1000];
	    if(x1==x2 && y1==y2)
	        return 0;
	    for(int i=0;i<N;i++)
	    {
	        for(int j=0;j<N;j++)
	            vis[i][j]=0;
	    }
	    queue<pair<int,int>>q;
	    q.push(make_pair(x1-1,y1-1));
	    while(!q.empty())
	    {
	        auto curr=q.front();
	        int i=curr.first;
	        int j=curr.second;
	        q.pop();
	        if(i+1>=0 && i+1<N && j+2>=0 && j+2<N &&vis[i+1][j+2]==0)
	        {
	            vis[i+1][j+2]=vis[i][j]+1;
	            q.push(make_pair(i+1,j+2));
	        }
	        if(i+1>=0 && i+1<N && j-2>=0 && j-2<N &&vis[i+1][j-2]==0)
	        {
	            vis[i+1][j-2]=vis[i][j]+1;
	            q.push(make_pair(i+1,j-2));
	        }
	        if(i-1>=0 && i-1<N && j+2>=0 && j+2<N &&vis[i-1][j+2]==0)
	        {
	            vis[i-1][j+2]=vis[i][j]+1;
	            q.push(make_pair(i-1,j+2));
	        }
	        if(i-1>=0 && i-1<N && j-2>=0 && j-2<N &&vis[i-1][j-2]==0)
	        {
	            vis[i-1][j-2]=vis[i][j]+1;
	            q.push(make_pair(i-1,j-2));
	        }
	        if(i+2>=0 && i+2<N && j+1>=0 && j+1<N &&vis[i+2][j+1]==0)
	        {
	            vis[i+2][j+1]=vis[i][j]+1;
	            q.push(make_pair(i+2,j+1));
	        }
	       if(i+2>=0 && i+2<N && j-1>=0 && j-1<N &&vis[i+2][j-1]==0)
	        {
	            vis[i+2][j-1]=vis[i][j]+1;
	            q.push(make_pair(i+2,j-1));
	        }
	        if(i-2>=0 && i-2<N && j-1>=0 && j-1<N &&vis[i-2][j-1]==0)
	        {
	            vis[i-2][j-1]=vis[i][j]+1;
	            q.push(make_pair(i-2,j-1));
	        }
	        if(i-2>=0 && i-2<N && j+1>=0 && j+1<N &&vis[i-2][j+1]==0)
	        {
	            vis[i-2][j+1]=vis[i][j]+1;
	            q.push(make_pair(i-2,j+1));
	        }
	    }
	    return vis[x2-1][y2-1];
	}
};
