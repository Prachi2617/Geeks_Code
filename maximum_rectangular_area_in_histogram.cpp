//Time-O(n)
//space-o(n)
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        stack<long long>st;
        long long i=0,ans=0,ma=0;

        while(i<n)
        {
            if(st.empty() || arr[i]>=arr[st.top()])
                st.push(i++);
            else
            {
                long long tp=st.top();
                st.pop();
                long long w;
                if(st.empty())
                    w=i;
                else
                    w=i-st.top()-1;
                ans=arr[tp]*w;
                ma=max(ma,ans);
            }
        }
        while(!st.empty())
        {
            long long tp=st.top();
                st.pop();
                long long w;
                if(st.empty())
                    w=i;
                else
                    w=i-st.top()-1;
                ans=arr[tp]*w;
                ma=max(ma,ans);
        }
        return ma;
    }
};
