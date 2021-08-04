//make both the list circular
void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    Node *temp1,*temp2,*temp;
     if(head == NULL)
        return;
    *head1_ref=head;
    //*head2_ref=head;
   temp=head;
    temp1=head;
    temp2=head;
    int n=1;
    while(temp1->next!=temp)
    {
        n++;
        temp1=temp1->next;
    }
  // temp1->next=NULL;

    if(n%2==0)
    {
        int q=(n/2)-1;
        while(q-- && temp2)
        {
            temp2=temp2->next;
        }
        *head2_ref=temp2->next;
        temp2->next=head;
        temp1->next=*head2_ref;
    }
    else
    {
        int q=n/2;
        while(q-- && temp2)
        {
            temp2=temp2->next;
        }
        *head2_ref=temp2->next;
        temp2->next=head;
        temp1->next=*head2_ref;
    }

}
