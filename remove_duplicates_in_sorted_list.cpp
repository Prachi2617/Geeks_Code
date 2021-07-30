/*Traverse the list from the head (or start) node. While traversing, compare each node with its next node. If the data of the
next node is the same as the current node then delete the next node. Before we delete a node, we need to store the next pointer
of the node*/

Node *removeDuplicates(Node *head)
{
    Node *temp, *nxt, *tt;
    temp=head;

    while(temp && temp->next)
    {

        if(temp->data==temp->next->data )
        {
              nxt=temp->next->next;
              tt=temp->next;
              free(tt);
              temp->next=nxt;
        }
        else
        {
            temp=temp->next;

        }
    }
    return head;
}
