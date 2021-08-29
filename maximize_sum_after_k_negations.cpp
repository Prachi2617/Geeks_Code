//Time- O(nlog(n))
//Space -O(1)
long long int maximizeSum(long long int a[], int n, int k)
    {
       sort(a,a+n);
       long long i,sum=0;
       for(i=0;i<n;i++)
       {
           if(a[i]<0 && k>0)
           {
               a[i]=-a[i];
               k--;
           }
       }
       for(i=0;i<n;i++)
        sum+=a[i];
       int x=*min_element(a,a+n);
       if(k%2!=0)
        sum-=2*x//because that min element is added twise
       return sum;
    }
