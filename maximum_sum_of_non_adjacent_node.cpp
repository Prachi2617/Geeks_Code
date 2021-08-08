unordered_map<Node *,int>mp;
int getMaxSum(Node *root)
{
    if(!root)
        return 0;
    if(mp[root])
        return mp[root];
    int inc=root->data;
    if(root->left)
    {
        inc+=getMaxSum(root->left->left);
        inc+=getMaxSum(root->left->right);
    }
     if(root->right)
    {
        inc+=getMaxSum(root->right->left);
        inc+=getMaxSum(root->right->right);
    }
    int exec=getMaxSum(root->left) +getMaxSum(root->right);
    mp[root]=max(inc,exec);
    return mp[root];
}
