//time- O(n)
//space- O(1)
long long int maxSum(int arr[], int n)
{
    sort(arr,arr+n);

    int i;
     int ans=0;
    // Subtracting a1, a2, a3,....., a(n/2)-1, an/2
    // twice and adding a(n/2)+1, a(n/2)+2, a(n/2)+3,.
    // ...., an - 1, an twice.
    for (int i = 0; i < n/2; i++)
    {
        ans -= (2 * arr[i]);
        ans += (2 * arr[n - i - 1]);
    }
    return ans;
}
-------------------------------------------------------------------------
//time- O(n)
//space- O(n)
long long int maxSum(int arr[], int n)
{
    sort(arr,arr+n);

    int i;
     int ans=0;
     vector<int>v;
    for(i=0;i<n/2;i++)
    {
        v.push_back(arr[i]);
        v.push_back(arr[n-i-1]);
    }
    if(n%2!=0)
        v.push_back(arr[i]);

    for(i=0;i<(n-1);i++)
    {
        ans=ans+abs(v[i+1]-v[i]);
    }
    ans=ans+abs(v[n-1]-v[0]);
    return ans;
}
