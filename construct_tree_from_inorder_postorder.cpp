class Solution{
    public:
    Node* solve(int in[],int pre[],int lb,int ub, int &idx,map<int,int>&mp)
    {
        if(lb>ub )
            return NULL;
        Node *temp=new Node(pre[idx++]);
        if(lb==ub)
            return temp;
        int mid=mp[temp->data];
        temp->left=solve(in,pre,lb,mid-1,idx,mp);
        temp->right=solve(in,pre,mid+1,ub,idx,mp);
        return temp;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
       int idx=0,i;
       map<int,int>mp;
       for(i=0;i<n;i++)
        mp[in[i]]=i;
       Node *head=solve(in,pre,0,n-1,idx,mp);
       return head;
    }
};
