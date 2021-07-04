// another approach is to divide the element from the mid and find min and max from each part and then compare it is a recursive approach

pair<long long, long long> getMinMax(long long a[], int n)
{
    pair<long long int , long long int>pq;
    if(n==1)
    {
        pq.first=a[0];
        pq.second=a[0];
        return pq;
    }
    else
    {
        if(a[0]>a[1])
        {
            pq.first=a[1];
            pq.second=a[0];
        }
        else
        {
           pq.first=a[0];
           pq.second=a[1];
        }
        for(int i=2;i<n;i++)
        {
            if(a[i]>pq.second)
                pq.second=a[i];
            if(a[i]<pq.first)
                pq.first=a[i];
        }
        return pq;
    }
}
