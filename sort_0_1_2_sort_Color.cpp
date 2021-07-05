#include<bits/stdc++.h>
using namespace std;
void printt(int a[], int n);
class solution
{
public:
    void sortt(int a[], int n)
    {
        int left=0, mid=0,high=n-1,i;
        for(i=0;i<n;i++)
        {
            if(a[mid]==0)
                swap(a[mid++],a[left++]);
            else if(a[mid]==2)
                swap(a[mid],a[high--]);
            else
                mid++;
        }
        cout<<"\n";
        //printt(a,n);
        /*int i,a0=0,a1=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        a0++;
        if(a[i]==1)
        a1++;
    }
    for(i=0;i<n;i++)
    {
        if(i<a0)
            a[i]=0;
       else if(i>=a0 && i<(a1+a0))
            a[i]=1;
        else
            a[i]=2;
    }*/
    }
};

void printt(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int t,n,i;
  //  int ans[];
    cout<<"enter no. of test cases- ";
    cin>>t;
    solution obj;
    while(t--)
    {
        cout<<"\nenter size of array- ";
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        obj.sortt(a,n);
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
    }
}
