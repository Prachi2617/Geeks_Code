void func(struct Node *root,int &sum)
    {
        if(!root)
            return ;
        func(root->right,sum);
        sum=sum+root->data;
        root->data=sum-root->data;
        func(root->left,sum);
    }
    void transformTree(struct Node *root)
    {
        int sum=0;
        if(!root)
            return;
        func(root,sum);
    }
