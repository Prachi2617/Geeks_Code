#include<bits/stdc++.h>
using namespace std;

int binary_search(int l, int h,int n,vector<int>A, int x)
{

    while(l<=h)
    {
        int mid=(l+h)/2;

        if(A[mid]>x)
        {
            h=mid-1;
        }
        else if(x>A[mid])
        {
            l=mid+1;
        }
        else if(x==A[mid])
        {
            return mid;
        }

    }
    cout<<"\nhell";
    return -1;
}


int find_pos(int n, vector<int>A, int x)
{
    int l=0, h=1, val=A[0];
    while(val<x)
    {
        l=h;
        h=2*h;
        if(h>A.size())
        {
            h=A.size();
            break;
        }
        val=A[h];
    }
    cout<<"\nl: "<<l <<" h: "<<h;
    int y= binary_search(l,h,n,A, x);
    return y;
}

int main()
{
    int x, n,i;
    cout<<"enter the size of array- ";
    cin>>n;
    vector<int>A;
    cout<<"\nenter the values of array- ";
    for(i=0;i<n/2;i++)
    {
        A.push_back(2*i);
        A.push_back(3*i);
    }
    sort(A.begin(),A.end());
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<"-"<<i+1<<"||";
    }
    cout<<"\nenter the key - :";
    cin>>x;
    int ans= find_pos(n,A,x);
    if(ans==-1)
        cout<<"\n value cannot be found";
    else
        cout<<"\nposition of x is : "<<ans+1;
    return 0;
}
