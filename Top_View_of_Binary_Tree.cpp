//similar to vertical order traversal just take top element of each horizontal distance

class Solution
{
    public:
    //Function to return a list of nodes visible from the top view
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        int hd=0;
        vector<int>ans;
        queue<Node *>q;
        q.push(root);
        map<Node *,int>mp;
        map<int,int>mp1;
        mp[root]=hd;
        mp1[hd]=root->data;
        while(!q.empty())
        {
            Node *curr=q.front();
            q.pop();
            if(curr->left)
            {
                q.push(curr->left);
                mp[curr->left]=mp[curr]-1;
                if(mp1.count(mp[curr->left])==0)
                {
                    mp1[mp[curr->left]]=curr->left->data;
                }
            }
            if(curr->right)
            {
                q.push(curr->right);
                mp[curr->right]=mp[curr]+1;
                if(mp1.count(mp[curr->right])==0)
                {
                    mp1[mp[curr->right]]=curr->right->data;
                }
            }
        }
        for(auto it1=mp1.begin();it1!=mp1.end();it1++)
        {
                ans.push_back(it1->second);
        }

            return ans;
    }

};
