    //time- O(nlog(n))
    //space -O(n)
    string chooseandswap(string a)
    {
        set<char>s;
        int i,ch;
        for(i=0;i<a.length();i++)
            s.insert(a[i]);
        for(i=0;i<a.length();i++)
        {
            s.erase(a[i]);

            if(s.empty())
                break;
             char ch=*s.begin();
            if(ch<a[i])
            {
                char ch2=a[i];
                for(int j=0;j<a.length();j++)
                {
                    if(a[j]==ch)
                        a[j]=ch2;
                    else if(a[j]==ch2)
                        a[j]=ch;
                }
                break;
            }
        }
        return a;
    }
