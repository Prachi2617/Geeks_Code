string isSubset(int a1[], int a2[], int n, int m)
{
    string S;
    int i;
    map<int,int>mp;
    for(i=0;i<n;i++)
        mp[a1[i]]++;
    for(i=0;i<m;i++)
    {
        if(!mp[a2[i]])
        {
            return "No";
        }
    }
    return "Yes";
}
