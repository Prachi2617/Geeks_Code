 //Time-O(Nlog(N))
 //Space- O(1)
 vector<int> candyStore(int candies[], int N, int K)
    {
        sort(candies,candies+N);
        vector<int>v;
        int i=0,j=N-1;
        int ans=0,c=0;
        while(i<=j )
        {
            if(c<N)
            {
                ans=ans+candies[i];
                c++;
                i++;
                j=j-K;
                c=c+K;
            }
            if(c>=N)
            {
                v.push_back(ans);
                break;
            }
        }
        i=0;
        j=N-1;
        ans=0,c=0;
        while(i<=j)
        {
            if(c<N)
            {
                ans=ans+candies[j];
                c++;
                j--;
                i=i+K;
                c=c+K;
            }
            if(c>=N)
            {
                v.push_back(ans);
                break;
            }
        }
        return v;
    }
