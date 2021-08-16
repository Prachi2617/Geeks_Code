	vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c)
    {
        vector<int>ans;
        vector<vector<bool>>vis(r,vector<bool>(c,false));
        //	vector<vector<bool> > seen(r, vector<bool>(c, false));
        if(matrix.size()==0)
            return ans;
        int dr[]={ 0 , 1, 0, -1};
        int dc[]={ 1, 0, -1, 0};

        int r1=0,c1=0,d=0;
        for(int i=0;i<r*c;i++)
        {
            ans.push_back(matrix[r1][c1]);
            vis[r1][c1]=true;
            int rr=r1+dr[d];
            int cc=c1+dc[d];
            if(rr>=0 && rr<r && cc>=0 && cc<c &&!vis[rr][cc])
            {
                r1=rr;
                c1=cc;
            }
            else
            {
                d=(d+1)%4;
                r1+=dr[d];
                c1+=dc[d];
            }
        }
        return ans;

    }
