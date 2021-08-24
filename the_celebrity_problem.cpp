//Time-O(n)
//Space-O(1)
class Solution
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n)
    {
        int c=0,i;
        for(i=1;i<n;i++)
        {
            if(M[c][i]==1)
                c=i;
        }
        for(i=0;i<n;i++)
        {
            if(i!=c && (M[i][c]==0 || M[c][i]==1 ))
                return -1;
        }
        return c;
    }
};
