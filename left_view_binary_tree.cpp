//Function to return a list containing elements of left view of the binary tree.
//using this way only we can print level order traversal and return it is vector of vector form

vector<int> leftView(Node *root)
{
   vector<int>ans;
   if(!root)
    return ans;
   queue<Node *>q;
   q.push(root);
   while(!q.empty())
   {
       int n=q.size();
       for(int i=1;i<=n;i++)
       {
           Node *curr=q.front();
           q.pop();
           if(i==1)
            ans.push_back(curr->data);
           if(curr->left)
            q.push(curr->left);
           if(curr->right)
            q.push(curr->right);
       }
   }
   return ans;
}

// level order traversal and returning it in vector of vector form

vector<vector<int>> levelOrder(TreeNode* root)
    {
        vector<vector<int>>ans;
        if(root==NULL)
            return ans;
        queue<TreeNode *>q;
        q.push(root);
        vector<int>v;
        while(!q.empty())
        {
            int n=q.size();
            for(int i=1;i<=n;i++)
            {
                TreeNode *curr=q.front();
                q.pop();
                v.push_back(curr->val);
                if(curr->left)
                {
                    q.push(curr->left);
                }
                if(curr->right)
                    q.push(curr->right);
            }
            ans.push_back(v);
            v.clear();
        }
        return ans;
    }
