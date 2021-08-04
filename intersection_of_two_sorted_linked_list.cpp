//with map and without map solution
Node* findIntersection(Node* head1, Node* head2)
{
    if(!head1 && !head2)
        return NULL;
    Node *temp1,*temp2;
    temp1=head1;
    temp2=head2;
    Node *dummy=new Node(0);
    //dummy->next=head1;
    Node *temp;
    temp=dummy;
    while(temp1 && temp2)
    {
        if(temp1->data==temp2->data)
        {
            Node *tt=new Node(0);
            tt->data=temp1->data;
            temp->next=tt;
            temp=temp->next;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        else if(temp1->data<temp2->data)
        {
            temp1=temp1->next;
        }
        else
        temp2=temp2->next;
    }

    return dummy->next;
    /*if(!head1 && !head2)
        return NULL;
    Node *temp1=head1;
    Node *temp2=head2;
    Node *dummy=new Node(0);
    Node *temp;
    temp=dummy;;
    map<int,int>mp;
    while(temp1)
    {
        mp[temp1->data]++;
        temp1=temp1->next;
    }
    while(temp2)
    {
        if(mp[temp2->data]==1)
        {
            mp[temp2->data]--;
            Node *tt=new Node(0);
            tt->data=temp2->data;
            temp->next=tt;
            temp=temp->next;
            temp2=temp2->next;

        }
        else
         temp2=temp2->next;
    }
    return dummy->next;*/
}
