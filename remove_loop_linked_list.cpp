/*#1-We do not need to count number of nodes in Loop. After detecting the loop, if we start slow pointer from head and move both
slow and fast pointers at same speed until fast don't meet, they would meet at the beginning of the loop.
#2- we can also do using map and store the address
*/
class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void remove_loop(Node *slow, Node *fast)
    {
        while(slow!=fast)
        {
            slow=slow->next;
            fast=fast->next;
        }
        while(fast->next!=slow)
        {
            fast=fast->next;
        }
        fast->next=NULL;
    }
    void removeLoop(Node* head)
    {
        Node *fast, *slow, *ptr1;

        slow=head;
        fast=head;

        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                slow=head;
                remove_loop(slow,fast);
                break;
            }
        }

    }
};
