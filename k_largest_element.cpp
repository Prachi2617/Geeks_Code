//max heap used because all the elements should be in decreasing order
class Solution{
public:
	vector<int> kLargest(int arr[], int n, int k)
	{
	    vector<int>ans;
	    int i;
	    priority_queue<int>pq;
	    for(i=0;i<n;i++)
	    {
	        pq.push(arr[i]);
	    }
	    while(k--)
	    {
	        ans.push_back(pq.top());
	        pq.pop();
	    }
	    return ans;
	}

};
