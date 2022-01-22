int minRepeats(string A, string B)
    {
        int n1=A.size();
        int n2=B.size();
        int i,j,k,count;
        bool found = false;
        for(i=0;i<n1;i++)
        {
            j=i;
            k=0;
            count=1;
            while(k<n2 && A[j]==B[k])
            {
                if(k==(n2-1))
                {
                    return count;
                }
                j=(j+1)%n1;
                if(j==0)
                    count++;
                k++;
            }
        }
        return -1;
    }
