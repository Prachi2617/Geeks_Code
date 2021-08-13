class Solution{
    public:

    vector<string>v;

    void dfs(int i, int j,string s, vector<vector<int>>m,int n)
    {
        if(i<0 || j<0 || i>=n ||j>=n)
            return ;
        if(m[i][j]==0 || m[i][j]==-1)
            return ;
        if(i==n-1 && j==n-1)
           { v.push_back(s);
               return ;
           }
        int x=m[i][j];
        m[i][j]=-1;
        dfs(i-1,j,s+'U',m,n);
        dfs(i+1,j,s+'D',m,n);
        dfs(i,j-1,s+'L',m,n);
        dfs(i,j+1,s+'R',m,n);
        m[i][j]=x;
    }

    vector<string> findPath(vector<vector<int>> &m, int n)
    {
       v.clear();
       if(m[0][0]==0)
        return v;
       if(m[n-1][n-1]==0)
            return v;
       string s="";
       dfs(0,0,s,m,n);
       sort(v.begin(),v.end());
       return v;
    }
};
