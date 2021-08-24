//Time-O(n)
//Space-O(k)
vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K)
{
    long long i;
    vector<long long>ans;
    queue<long long>q;
    for(i=0;i<K-1;i++)
    {
        if(A[i]<0)
            q.push(A[i]);
    }
    int j=0;
    for(i=K-1;i<N;i++)
    {
        if(A[i]<0)
            q.push(A[i]);
        if(!q.empty())
        {
            ans.push_back(q.front());
            if(A[j]==q.front())
                q.pop();
        }
        else
            ans.push_back(0);
        j++;
    }
    return ans;
 }
