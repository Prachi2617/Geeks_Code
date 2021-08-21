#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int mat[100][100], int n, int k)
{
    int ans,i,j=0,flag;
    priority_queue<int>pq;
    for(i=0;i<n;)
    {
        j=0;

            while(pq.size()<k && j<n)
            {
                pq.push(mat[i][j]);
                j++;
            }
            while(pq.size()==k && pq.top()>mat[i][j] && j<n)
            {
                pq.pop();
                pq.push(mat[i][j]);
                j++;
            }
            i++;

    }
    ans=pq.top();

    return ans;
}

int main()
{
    int n,k;
    int mat[100][100];
    cout<<"size of matrix- ";
    cin>>n;
    cout<<"\nkth number- ";
    cin>>k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>mat[i][j];
    }

    int ans=kthSmallest(mat,n,k);
    cout<<"\nkth smallest number is- "<<ans;
    return 0;
}

