/*By Sorting the array the efficiency of the algorithm can be improved. This efficient approach uses the two-pointer technique.
Traverse the array and fix the first element of the triplet. Now use the Two Pointers algorithm to find if there is a pair whose
 sum is equal to x – array[i]. Two pointers algorithm take linear time so it is better than a nested loop.*/
bool find3Numbers(int A[], int n, int X)
    {
        int i,j,k;
        k=n-1;
        sort(A,A+n);

        for(i=0;i<n-2;i++)
        {
            k=n-1;
            for(j=i+1;j<k;)
            {
                if((A[i]+A[j]+A[k])==X)
                    return true;
                else if((A[i]+A[j]+A[k])<X)
                    j++;
                else
                 k--;

            }
        }
        return false;
    }
