//simple solution first while loop is to go to the last element of linked list
//2nd while loop is to insert first element into last and update the first and last element


class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        Node *prev, *last;
        prev=head;
        last=head;
        while(last->next)
            last=last->next;
        while(k>0)
        {
            last->next=prev;
            last=prev;
            prev=prev->next;
            last->next=NULL;
            k--;
        }
        return prev;
       /* Node *prev, *new_head, *temp;
        prev=head;
        temp=head;
        new_head=head;
        if(head->next==NULL)
            return head;
        while(k>1)
        {
            if(temp->next==NULL)
                temp=head;
            temp=temp->next;
            k--;
        }
        new_head=temp->next;
        temp->next=NULL;
        Node *temp1;
        temp1=new_head;
        while(temp1->next)
        {
            temp1=temp1->next;
        }
        temp1->next=prev;
        return new_head;*/
    }
};
