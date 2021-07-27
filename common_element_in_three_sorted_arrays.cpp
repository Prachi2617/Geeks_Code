vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int>ans;
            map<int,int>mp;
            map<int,int>mp1;
            for(int i=0;i<n1;i++)
            {
                if(!mp[A[i]])
                mp[A[i]]=1;
            }

            for(int i=0;i<n2;i++)
            {
                if(mp[B[i]]==1)
                {
                    mp1[B[i]]=1;
                }
            }
             for(int i=0;i<n3;i++)
            {
                if(mp1[C[i]]==1)
                {
                    ans.push_back(C[i]);
                    mp1[C[i]]++;
                }
            }
            return ans;

        }
