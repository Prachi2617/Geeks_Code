//if height of left subtree and right subtree is greater than 1 then it is not balanced
int func(Node *root, int &ans)
{
    if(!root)
        return 0;
    int x=func(root->left,ans);
    int y=func(root->right,ans);
    if(abs(x-y)>1)
        {
            ans=0;
            return 0;
        }
        return (max(x,y)+1) ;
}

bool isBalanced(Node *root)
{
    int ans=1;
    int x;
    x=func(root,ans);
    return ans;
}
