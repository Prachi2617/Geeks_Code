//for every subtree we'll check the hight of that subtree and will keep on updating ans if diameter is maximum in that subtree

class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    //int ans;
    int func(Node *root, int &ans)
    {
        if(!root)
            return 0;
        int x=func(root->left,ans);
        int y=func(root->right,ans);
        ans=max(ans,x+y+1);
        return (max(x,y)+1);
    }
    int diameter(Node* root)
    {
        int ans=INT_MIN;
        int x;
        x=func(root,ans);
        return ans;
    }
};
