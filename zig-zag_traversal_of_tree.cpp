vector <int> zigZagTraversal(Node* root)
{
	vector<int>ans;

	stack<Node *>st1;
	stack<Node *>st2;
	st1.push(root);
	  while(!st1.empty() || !st2.empty())
   {
       while(!st1.empty())
       {
           Node *curr1=st1.top();
           st1.pop();
           ans.push_back(curr1->data);
           if(curr1->left)
            st2.push(curr1->left);
           if(curr1->right)
            st2.push(curr1->right);

       }
       while(!st2.empty())
       {
           Node *curr2=st2.top();
           st2.pop();
           ans.push_back(curr2->data);

           if(curr2->right)
            st1.push(curr2->right);
            if(curr2->left)
            st1.push(curr2->left);
       }
   }
   return ans;
}
