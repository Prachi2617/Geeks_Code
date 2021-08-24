//This approach takes the worst time complexity of O(n^2),
// O(N) recursive space complexity
void sorty(int x, stack<int>&s)
{
    if(s.empty())
        s.push(x);
    else
    {
        if(s.top()<=x)
            s.push(x);
        else
        {
            int a=s.top();
            s.pop();
            sorty(x,s);
            s.push(a);
        }
    }
}
void sortt(stack<int>&s)
{
    if(s.size()>0)
    {
        int a=s.top();
        s.pop();
        sortt(s);
        sorty(a,s);
    }
}
void SortedStack :: sort()
{
    sortt(s);
}
