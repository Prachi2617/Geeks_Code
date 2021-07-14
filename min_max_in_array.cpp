divide the array and compare min and max from both sides
#include<bits/stdc++.h>
using namespace std;
struct Pair
{
    int minn;
    int maxx;
};
struct Pair getminmax(int a[],int lo,int hi)
{
        struct Pair mx, mm,mxx;
        if(lo==hi)
        {
            mx.minn=a[lo];
            mx.maxx=a[lo];
            return mx;
        }
        else if(hi==(lo+1))
        {
            if(a[lo]>a[hi])
            {
                mx.minn=a[hi];
                mx.maxx=a[lo];
            }
            else
            {
                mx.minn=a[lo];
                mx.maxx=a[hi];
            }
            return mx;
        }
        int mid=(lo+hi)/2;
        mm=getminmax(a,lo,mid);
        mxx=getminmax(a,mid+1,hi);
        if(mm.minn>mxx.minn)
        {
            mx.minn=mxx.minn;
        }
        else
            mx.minn=mm.minn;

        if(mm.maxx>mxx.maxx)
            mx.maxx=mm.maxx;
        else
            mx.maxx=mxx.maxx;
        return mx;

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    struct Pair mx=getminmax(a,0,n-1);
    cout<<"\nMIN ELEMENT: "<<mx.minn;
    cout<<"\nMAX ELEMENT: "<<mx.maxx;
    return 0;
}
