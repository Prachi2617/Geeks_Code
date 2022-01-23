#include<bits/stdc++.h>
using namespace std;
int maxOnes (vector <vector <int>> &Mat, int N, int M)
{
    int i, j,ans=0,curr=0,row,k=M-1;
    for(i=0;i<N;i++)
    {
        //curr=0;
        for(j=k;j>=0;j--)
        {
            if(Mat[i][j]==1)
            {
                curr++;
            }
            else
            {
                k=j;
                break;
            }
        }
          if(curr==M)
                    return i;
        if(curr>ans)
        {
            ans=curr;
            row=i;
        }
    }
    return row;
}


int main()
{
    int i,j,n,m,x;
    vector<vector<int>>mat;
    vector<int>dummy;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>x;
            dummy.push_back(x);
        }
        mat.push_back(dummy);
        dummy.clear();
    }
    int ans=maxOnes(mat,n,m);
    cout<<"\n final answer:"<<ans;
    return 0;
}
