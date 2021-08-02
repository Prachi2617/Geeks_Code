//use queue to push left node of each element and then keep on pushing right child of each node in ans vector until right side becomes NULL

vector<int> diagonal(Node *root)
{
   vector<int>ans;
   queue<Node *>q;
   q.push(root);

   while(!q.empty())
   {
       Node *curr=q.front();
       q.pop();
      // ans.push_back(curr->data);
       while(curr)
       {
           ans.push_back(curr->data);
           if(curr->left)
            q.push(curr->left);
           curr=curr->right;
       }
   }
   return ans;
}
