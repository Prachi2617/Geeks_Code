class Solution
{
    public:
    int f=1;
    int solve(Node *root)
    {
        if(!root)
            return 0;
        if(!root->left && !root->right)
            return root->data;
        if(f==0)
            return 0;
        int x= solve(root->left);
        int y=solve(root->right);
        if((x+y)!=root->data)
            f=0;
        return x+y+root->data;
    }
    bool isSumTree(Node* root)
    {
        f=1;
        solve(root);
       return f;
    }
};
