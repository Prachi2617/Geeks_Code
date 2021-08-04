class Solution
{
    public:
    Node *rev(Node *head)
    {
        Node *temp, *prev, *curr;
        curr=head;
        prev=NULL;
        while(curr)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    Node* addOne(Node *head)
    {
        if(head==NULL)
            return NULL;
        Node *temp,*tt;
        temp=head;
        tt=rev(temp);
        if(tt->data!=9)
        {
            tt->data+=1;
            temp=rev(tt);
            return temp;
        }
        else
        {
            int q=1;
            temp=tt;
            while(q && temp->next)
            {
                temp->data=0;
                if(temp->next->data==9)
                 temp=temp->next;
                else
                {
                    temp->next->data+=1;
                    q=0;
                }


            }
            if(q==1)
            {
                temp->data=10;
            }

            temp=rev(tt);
        }
        return temp;
    }
};
