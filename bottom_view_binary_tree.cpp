//similar to vertical order traversal you just have to print the last element in every line

class Solution {
  public:
    vector <int> bottomView(Node *root)
    {
        vector<int>ans;
        queue<Node *>q;
        int hd=0;
        map<Node *,int>mp;
        mp[root]=hd;
        map<int,int>mp1;
        mp1[hd]=root->data;
        q.push(root);
        while(!q.empty())
        {
            Node *curr=q.front();
            q.pop();
            if(curr->left)
            {
                q.push(curr->left);
                mp[curr->left]=mp[curr]-1;
                mp1[mp[curr->left]]=curr->left->data;
            }
            if(curr->right)
            {
                q.push(curr->right);
                 mp[curr->right]=mp[curr]+1;
                mp1[mp[curr->right]]=curr->right->data;
            }
        }
        for(auto it=mp1.begin();it!=mp1.end();it++)
        {
            ans.push_back(it->second);
        }
        return ans;
    }

};
