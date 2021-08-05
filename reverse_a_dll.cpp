//simply reverse prev and next of each node then make temp as head, and go to previous element


Node* reverseDLL(Node * head)
{
    Node *temp;
    temp=head;
    while(temp)
    {
        swap(temp->next,temp->prev);
        head=temp;
        temp=temp->prev;
    }
    return head;
    /*Node *left, *right;
    left=head;
    right=head;
    int n=1;
    while(right->next)
    {
        n++;
        right=right->next;
    }
    int q=n/2;
    while(q--)
    {
        swap(left->data, right->data);
        left=left->next;
        right=right->prev;
    }
    return head;*/
}

