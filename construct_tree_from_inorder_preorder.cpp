class Solution {
public:
     TreeNode *solve(vector<int>inorder, vector<int>postorder,int lb,int ub,int &idx,map<int,int>&mp)
    {
        if(lb>ub )
            return NULL;
         int curr=postorder[idx];
        TreeNode *temp=new TreeNode(curr);
         idx--;
        int mid=mp[temp->val];
        if(lb==ub)
            return temp;
         temp->right=solve(inorder,postorder,mid+1,ub,idx,mp);
        temp->left=solve(inorder,postorder,lb,mid-1,idx,mp);

        return temp;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder)
    {
           int idx,i,n;
           n=inorder.size();
        idx=n-1;
           vector<int>preorder;
           /*for(i=0;i<n;i++)
           {
               preorder[i].push_back(postorder[n-1-i]);
           }
           for(i=0;i<n/2;i++)
           {
               swap[postorder[i],postorder[n-1-i]];
           }*/
           map<int,int>mp;
           for(i=0;i<n;i++)
               mp[inorder[i]]=i;
           TreeNode *head;
           head =solve(inorder,postorder,0,n-1,idx,mp);
            return head;
    }
};
