//Expected Time Complexity : O(n)
//Expected Auxilliary Space : O(n)
void func(queue<int>&q)
{
    if(!q.empty())
    {
        int x=q.front();
        q.pop();
        func(q);
        q.push(x);
    }
}
queue<int> rev(queue<int> q)
{
    func(q);
    return q;
}
