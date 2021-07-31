//if element not present in map we can add it to map else we'll remove the element from list use dummy head

class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head)
    {
        Node *temp;
        if(head==NULL)
            return NULL;
        map<int,int>mp;
        Node *dummy=new Node(0);
        dummy->next=head;
        temp=dummy;
        Node *dup;
        while(temp->next)
        {
            if(mp[temp->next->data])
            {
                dup=temp->next;
                temp->next=temp->next->next;
                free(dup);
            }
            else
            {
                mp[temp->next->data]++;
                temp=temp->next;
            }
        }
        return dummy->next;
    }
};
