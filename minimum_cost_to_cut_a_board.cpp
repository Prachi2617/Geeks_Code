//time- O(nlog(n))
//space- O(1)
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n,i;
    cin>>m>>n;
    m--;
    n--;
    int x[m],y[n];
    for(i=0;i<m;i++)
        cin>>x[i];
    for(i=0;i<n;i++)
        cin>>y[i];
    sort(x,x+m,greater<int>());
    sort(y,y+n,greater<int>());
    i=0;
    int j=0;
    int ans=0;
    int v_cnt=1;
    int h_cnt=1;
    while(i<m && j<n)
    {
        if(x[i]>y[j])
        {
            ans=ans+x[i]*v_cnt;
            h_cnt++;
            i++;
        }
        else
        {
            ans=ans+y[j]*h_cnt;
            v_cnt++;
            j++;
        }
    }
    while(i<m)
    {
        ans=ans+x[i]*v_cnt;
        h_cnt++;
        i++;
    }
    while(j<n)
    {
        ans=ans+y[j]*h_cnt;
            v_cnt++;
            j++;
    }
    cout<<"\ntotal cost is-> "<<ans;
    return 0;
}
