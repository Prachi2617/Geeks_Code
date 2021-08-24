//Time-O(n)
//space- O(n)

char* reverse(char *S, int len)
{
    stack<char>st;
    int i;
    for(i=0;i<len;i++)
    {
        st.push(S[i]);
    }
    char *a=new char[len];
    i=0;
    while(!st.empty())
    {
        a[i]=st.top();
        st.pop();
        i++;
    }
    a[i]='\0';
    return a;
}
