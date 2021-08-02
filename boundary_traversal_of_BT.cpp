//chek left tree first then leaf node and then right tree

class Solution {
public:
    void left_tree(Node *root, vector<int>&ans)
    {
        if(!root)
            return;
        if(root->left)
        {
            ans.push_back(root->data);
            left_tree(root->left,ans);
        }
        else if(root->right)
        {
            ans.push_back(root->data);
            left_tree(root->right,ans);
        }
    }
    void leaf(Node *root,vector<int>&ans)
    {
        if(!root)
            return ;
        leaf(root->left,ans);
        if(!root->left && !root->right)
            ans.push_back(root->data);
        leaf(root->right,ans);
    }
    void right_tree(Node *root, vector<int>&ans)
    {
        if(!root)
            return ;
        if(root->right)
        {
            right_tree(root->right,ans);
            ans.push_back(root->data);
        }
        else if(root->left)
        {
            right_tree(root->left,ans);
            ans.push_back(root->data);
        }
    }
    vector <int> printBoundary(Node *root)
    {
       vector<int>ans;
       ans.push_back(root->data);
       left_tree(root->left, ans);
       leaf(root,ans);
       right_tree(root->right,ans);
       return ans;
    }
};
