int intersectPoint(Node* head1, Node* head2)
{
    int n1=0,n2=0;
    int ans;
    Node *temp1, *temp2;
    temp1=head1;
    temp2=head2;
    while(temp1)
    {
        n1++;
        temp1=temp1->next;
    }
    while(temp2)
    {
        n2++;
        temp2=temp2->next;
    }
    if(n1>n2)
    {
        int d=n1-n2;
        temp1=head1;
        temp2=head2;
        while(d--)
        {
            temp1=temp1->next;
        }
        while(temp1->next !=temp2->next)
        {
            temp1=temp1->next;
            temp2=temp2->next;
        }
        ans=temp1->next->data;
    }
    else if(n2>n1)
    {
        int d=n2-n1;
        temp1=head1;
        temp2=head2;
        while(d--)
        {
            temp2=temp2->next;
        }
        while(temp1->next !=temp2->next)
        {
            temp1=temp1->next;
            temp2=temp2->next;
        }
        ans=temp1->next->data;
    }
    else
    {
        temp1=head1;
        temp2=head2;
        while(temp1->next !=temp2->next)
        {
            temp1=temp1->next;
            temp2=temp2->next;
        }
        ans=temp1->next->data;
    }
    return ans;
}
