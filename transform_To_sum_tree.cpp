class Solution {
  public:

    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int sum_tree(Node *root)
    {
        if(!root)
            return 0;
        int old=root->data;
        int x=sum_tree(root->left);
        int y=sum_tree(root->right);
        root->data=x+y;
       // root->data=sum_tree(root->left)+sum_tree(root->right);
        return root->data+old;
    }
    void toSumTree(Node *node)
    {
        int x= sum_tree(node);
    }
};
