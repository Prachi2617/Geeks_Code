{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n)
    {
        vector<long long>ans;
        stack<long long>st;
       // st.push(arr[0]);
        long long i;

        for(i=n-1;i>=0;i--)
        {
            if(!st.empty())
            {
                while(!st.empty() && st.top()<=arr[i])
                st.pop();
            }
            if(st.empty())
                ans.push_back(-1);
            else
                ans.push_back(st.top());
            st.push(arr[i]);
        }
        for(i=0;i<n/2;i++)
            swap(ans[i],ans[n-1-i]);
        return ans;
    }
};
