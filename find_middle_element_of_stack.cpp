#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
    Node(int x)
    {
        data=x;
        prev=NULL;
        next=NULL;
    }
};
Node *dummy=new Node(-1);
Node *head=dummy;
Node *mid=dummy;
int cnt=0;

void push(int x)
{
    Node *temp=new Node(x);
    temp->next=head;
    head->prev=temp;
    head=temp;
    cnt++;
    if(cnt%2!=0)
        mid=mid->prev;
}

int pop()
{
    Node *temp=head;
    int x=head->data;
    head=head->next;
    head->prev=NULL;
    delete(temp);
    cnt--;
    if(cnt%2==0)
        mid=mid->next;
    return x;
}
int get_mid()
{
    return mid->data;
}

int delete_mid()
{
    Node *temp=mid;
        int x=mid->data;
    if(cnt%2!=0)
    {

        Node *midb=mid->prev;
        Node *midn=mid->next;
        mid=mid->next;
        midn->prev=midb;
        midb->next=midn;
        delete(temp);
        cnt--;
    }
    else{
        Node *midb=mid->prev;
        Node *midn=mid->next;
        mid=mid->prev;
        midn->prev=midb;
        midb->next=midn;
        delete(temp);
        cnt--;
    }
    return x;
}
int main()
{
    push( 11);
    push( 22);
    push( 33);
    push( 44);
    push( 55);
    push( 66);
    push( 77);

    cout << "Item popped is " << pop() << endl;
    cout << "Item popped is " << pop() << endl;
   // cout << "Item popped is " << pop() << endl;
    cout << "Middle Element is " << get_mid() << endl;
    cout << "Deleted Middle Element is "<<delete_mid()<<endl;
    cout << "Middle Element is " << get_mid() << endl;
    return 0;
}
