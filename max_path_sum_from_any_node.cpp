class Solution {
  public:
    //Function to return maximum path sum from any node in a tree.
    int ans=INT_MIN;
    int func(Node* root)
    {
         if(!root)
            return 0;
        /*if(root->left==NULL && root->right==NULL)
        {
            return root;
        }*/
        int x=func(root->left);
        int y=func(root->right);
        int xx=max(root->data +x, root->data +y);
        int xx1=max(xx, root->data +y+x);
        int xx2=max(root->data,xx1);
        ans=max(ans,xx2);
        return max(root->data,max(x+root->data , y+root->data));
    }
    int findMaxSum(Node* root)
    {
        func(root);
        return ans;
    }
};
