//print right most node of each level i.e right view
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       vector<int>ans;
       if(!root)
        return ans;
       queue<Node *>q;
       q.push(root);
       while(!q.empty())
       {
           int n=q.size();
           for(int i=0;i<n;i++)
           {
               Node *curr=q.front();
               q.pop();
               if(i==(n-1))
                ans.push_back(curr->data);
               if(curr->left)
                q.push(curr->left);
               if(curr->right)
                q.push(curr->right);
           }
       }
       return ans;
    }
};
