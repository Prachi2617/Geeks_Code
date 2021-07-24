//at every level count the leaf node if exist ,if it is greater than 0 and not equal to total nodes at that level then return false

class Solution{
  public:
    /*You are required to complete this method*/
    bool check(Node *root)
    {
        if(root==NULL)
            return 0;
        queue<Node *>q;
        q.push(root);
        while(!q.empty())
        {
            Node *curr=q.front();
            int n=q.size();
            int s=0;
            for(int i=0;i<n;i++)
            {
                Node *curr=q.front();
                q.pop();

                if(curr->left==NULL && curr->right==NULL)
                {
                    s++;
                }
                else
                {
                    if(curr->left)
                        q.push(curr->left);
                    if(curr->right)
                        q.push(curr->right);

                }

            }
            if(s>0 && s!=n)
                        return false;
        }
        return true;
    }
};
