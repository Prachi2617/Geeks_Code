#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r,mid,x;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    cout<<"\nenter the element to search: ";
    cin>>x;
    l=0;
    r=n-1;
    while(l<=r)
    {
        mid= l+(r-l)/2;
        if(A[mid]==x)
        {
            cout<<mid;
            break;
        }
        else if(A[mid]<x)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
}
