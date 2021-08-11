void func(Node *root, int &sum)
{
    if(!root)
        return ;
    if(root->left)
    {
        if(!root->left->left && !root->left->right)
            sum=sum+root->left->data;
        func(root->left,sum);
    }
     if(root->right)
    {
        func(root->right,sum);
    }

}
int leftLeavesSum(Node *root)
{
    int sum=0;
    func(root,sum);
    return sum;
}
