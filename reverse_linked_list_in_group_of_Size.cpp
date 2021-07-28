class Solution
{
    public:

    struct node *reverse (struct node *head, int k)
    {
        struct node *temp, *prev, *curr;
        temp=head;
        prev=NULL;
        curr=head;
        int i=0;
        while(curr && i<k)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
            i++;
        }
        if(temp)
        {
         head->next=reverse(temp,k);
        }


        return prev;;
    }
};
