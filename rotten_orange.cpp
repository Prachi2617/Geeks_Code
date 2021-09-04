//Expected Time Compelxity: O(n*m)
//Expected Auxiliary Space: O(n*m)// in worst case

class Solution
{
    public:
    //Function to find minimum time required to rot all oranges.
    void func(int k, int l, int m , int n,queue<pair<int,int>>&q,vector<vector<int>>&grid)
    {
        if((k-1)>=0 && (k-1)<m && l>=0 && l<n && grid[k-1][l]==1)
        {
            q.push({k-1,l});
            grid[k-1][l]=2;
        }
        if((k+1)>=0 && (k+1)<m && l>=0 && l<n && grid[k+1][l]==1)
        {
            q.push({k+1,l});
            grid[k+1][l]=2;
        }
        if((k)>=0 && (k)<m && (l-1)>=0 && (l-1)<n && grid[k][l-1]==1)
        {
            q.push({k,l-1});
            grid[k][l-1]=2;
        }
        if((k)>=0 && (k)<m && (l+1)>=0 && (l+1)<n && grid[k][l+1]==1)
        {
            q.push({k,l+1});
            grid[k][l+1]=2;
        }
        //q.push({-1,-1});
    }
    int orangesRotting(vector<vector<int>>& grid)
    {
        int ans=0;
        queue<pair<int,int>>q;
        int i,j,m,n,k,l;
        m=grid.size();
        n=grid[0].size();
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(grid[i][j]==2)
                    q.push({i,j});
            }
        }
        q.push({-1,-1});
        while(!q.empty())
        {
            k=q.front().first;
            l=q.front().second;
            //q.pop();
            if(k==-1 && l==-1 && q.size()>1)
               { ans++;
                   q.pop();
                   q.push({-1,-1});
               }
            else if(k==-1 && l==-1 &&q.size()==1)
            {
                q.pop();
                break;
            }
            else
                {
                    func(k,l,m,n,q,grid);
                    q.pop();
                }
        }
         for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                    return -1;
            }
        }
        return ans;
    }
};
