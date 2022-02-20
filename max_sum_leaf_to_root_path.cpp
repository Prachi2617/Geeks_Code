class Solution{
    public:
    int ans=INT_MIN;
    int maxPathSum(Node* root)
    {
        if(root==NULL)
            return 0;
        int x=maxPathSum(root->left);
        int y=maxPathSum(root->right);
        ans=max(ans,max(x+root->data,y+root->data));
        return max(x+root->data,y+root->data);
    }
};
