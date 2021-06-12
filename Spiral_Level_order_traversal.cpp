//We have used two stacks to print the tree in spiral form
//We can also do it using one stack and one queue.
//Time complexity: O(n)
//Space complexity : O(n)


vector<int> findSpiral(Node *root)
{
   vector<int>ans;
   if(!root)
    return ans;
   stack<Node *>st1;//1st stack is to print from right to left
   stack<Node *>st2;// 2nd is to print from left to right
   st1.push(root);
   while(!st1.empty() || !st2.empty())
   {
       while(!st1.empty())
       {
           Node *curr1=st1.top();
           st1.pop();
           ans.push_back(curr1->data);
           if(curr1->right)
            st2.push(curr1->right);
           if(curr1->left)
            st2.push(curr1->left);
       }
       while(!st2.empty())
       {
           Node *curr2=st2.top();
           st2.pop();
           ans.push_back(curr2->data);
           if(curr2->left)
            st1.push(curr2->left);
           if(curr2->right)
            st1.push(curr2->right);
       }
   }
   return ans;
}

