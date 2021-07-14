void preorder1(Node *root,vector<int>&ans)
{
    if(root==NULL)
        return;
    ans.push_back(root->data);
    preorder1(root->left,ans);
    preorder1(root->right,ans);
}
vector <int> preorder(Node* root)
{
   vector<int>ans;
   preorder1(root,ans);
   return ans;
}
