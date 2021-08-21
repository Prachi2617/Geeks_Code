//Time Complexity- O(n+m)
//Space Complexity- O(1)


class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m)
	{
	    int i, j,curr,x=0;
	    curr=m-1;
	    int mx=0;
	    int id=-1;
	    for(i=0;i<n;i++)
	    {
	        //x=0;
	        while(curr>=0 && arr[i][curr]==1)
	        {
	            curr=curr-1;
	            x++;
	        }
	        if(x>mx)
	           { mx=x;
	               id=i;
	           }
	    }
	    return id;
	}

};
