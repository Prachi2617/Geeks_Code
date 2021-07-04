#include<bits/stdc++.h>
using namespace std;

string reverse_string(string s)
{
    int start=0,last;
    last=s.size()-1;
    while(start<last)
    {
        char temp=s[start];
        s[start]=s[last];
        s[last]=temp;
        start++;
        last--;
    }
    return s;
}

int main()
{
    int t, n;
    string s,ans;
    cout<<"enter number of test cases";
    cin>>t;
    while(t--)
    {
        cout<<"\nenter string- ";
        cin>>s;
        ans=reverse_string(s);
        cout<<ans;
    }
}
