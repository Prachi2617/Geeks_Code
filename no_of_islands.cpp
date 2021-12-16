void dfs(int i, int j,vector<vector<char>>&grid,int r,int c)
    {
        if(i<0 || j<0 || i>=r || j>=c)
            return;
        if(grid[i][j]=='0')
            return ;
        if(grid[i][j]=='1')
        {
            grid[i][j]='0';
            dfs(i,j+1,grid,r,c);
            dfs(i,j-1,grid,r,c);
            dfs(i+1,j,grid,r,c);
            dfs(i-1,j,grid,r,c);
            dfs(i-1,j-1,grid,r,c);
            dfs(i+1,j-1,grid,r,c);
            dfs(i-1,j+1,grid,r,c);
            dfs(i+1,j+1,grid,r,c);
        }
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        int i,j,r,c;
        r=grid.size();
        c=grid[0].size();
        int ans=0;
       
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(grid[i][j]=='1')
                {
                    dfs(i,j,grid,r,c);
                    ans++;
                }
            }
        }
        return ans;
    }
