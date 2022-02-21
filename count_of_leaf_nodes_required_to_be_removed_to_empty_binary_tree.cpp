#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;
};

node* newNode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;

    return(Node);
}
map<int,int>mp;
int func(node *root)
{
    if(root==NULL)
        return 0;

    int x=func(root->left);
    int y=func(root->right);
    mp[max(x,y)]++;
    return max(x,y)+1;
}

int main()
{
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(1);
    root->left->right = newNode(8);
    root->right->right = newNode(6);
    root->left->right->left = newNode(3);
    root->left->right->right = newNode(3);

    cout << "Level Order traversal of binary tree is \n";

    func(root);
    cout<<"\nFinal Answer: ";
    for(auto it : mp)
    {
        cout<<it.second <<" ";
    }

    return 0;

}
