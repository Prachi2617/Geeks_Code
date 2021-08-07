//check if it odd then put it in the end

class Solution{
public:
    Node* divide(int N, Node *head)
    {
        if(!head)
            return NULL;
        Node *temp,*last;
        Node *dummy=new Node(0);
        dummy->next=head;
        last=head;
        while(last->next)
        {
            last=last->next;
        }
        temp=dummy;
        Node *end=last;
        while(temp->next!=end)
        {
            if((temp->next->data)%2!=0 && temp->next!=end)
            {
                last->next=temp->next;
                last=last->next;
                temp->next=temp->next->next;
                last->next=NULL;
            }

            else
            temp=temp->next;

        }
        if(temp->next==end && (temp->next->data)%2!=0)
        {
            last->next=temp->next;
            temp->next=temp->next->next;
            last->next->next=NULL;
        }
        /*if(end->data%2!=0)
        {
            last->next=temp->next;
            last=last->next;
            temp->next=temp->next->next;
            last->next=NULL;
        }*/
        return dummy->next;
    }
};
