class Solution{
	public:
	void sortedMerge(int a[], int b[], int res[],int n, int m)
	{

	   int i,j,x;
	   sort(a,a+n);
	   sort(b,b+m);
	   x=0;
	   for(i=0,j=0;i<n && j<m;)
	   {
	       if(a[i]<b[j])
	       {
	           res[x]=a[i];
	           i++;
	           x++;
	       }
	       else
	       {
	           res[x]=b[j];
	           j++;
	           x++;
	       }
	   }
	   while(i<n)
	   {
	       res[x]=a[i];
	       x++;
	       i++;
	   }
	   while(j<m)
	    {
	       res[x]=b[j];
	       x++;
	       j++;
	   }
	}
};
