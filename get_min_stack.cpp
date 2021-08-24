//time-O(1)
//space-O(1)
int mi;
void push(stack<int>& s, int a)
{
    if(s.empty())
    {
        mi=a;
        s.push(a);
    }
    else
    {

        if(a<mi)
        {
            int x=2*a-mi;
            mi=a;
            s.push(x);
        }
        else
            s.push(a);
    }
}

bool isFull(stack<int>& s,int n)
{
    if(s.size()==n)
        return true;
    else
        return false;
}

bool isEmpty(stack<int>& s)
{
    if(s.empty())
        return true;
    else
        return false;
}

int pop(stack<int>& s)
{
    int v=s.top();
   if(v>=mi)
    s.pop();
   else
   {
       int z=2*mi-v;
       mi=z;
       s.pop();
   }
}

int getMin(stack<int>& s)
{
    return mi;
}
