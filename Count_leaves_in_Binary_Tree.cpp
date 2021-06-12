//First solution is iterative approach of counting leaves using queue
//Time Complexity=O(n);
//Space Complexity=O(n);

int countLeaves(Node* root)
{

    int cnt=0;
    if(root==NULL)
        return cnt;
    queue<Node *>q;
    q.push(root);
    while(!q.empty())
    {
        Node *curr=q.front();
        q.pop();
        if(curr->left==NULL && curr->right==NULL)
            cnt++;
        if(curr->left)
            q.push(curr->left);
        if(curr->right)
            q.push(curr->right);

    }
    return cnt;
}


// 2nd Approach is using recursive approach
// Time Complexity =O(n)
//Space Complexity= O(1);
int countLeaves(Node* root)
{
   if(root==NULL)
    return 0;
   if(root->left==NULL && root->right==NULL)
    return 1;

    return countLeaves(root->left) + countLeaves(root->right);

}


