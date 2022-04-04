#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;  
    node(int d)
    {
        data = d;
        next = NULL;
    }
};
class queue
{
    public:
    void queue_front(node*&head,int val)
    {
        node*z=new node(val);
        if(head==NULL)
        {
            head=z;
        }
        else
        {
             node*temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=z;
        }
       
    }
    void queue_rear(node*&head,int val)
    {
        node*z=new node(val);
        if(head==NULL)
        {
            head=z;
        } 
        else
        {
            z->next=head;
            head=z;
        }
    }
    void dequeue_front(node*&head)
    {
        node*temp=head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=NULL;
    }
    void dequeue_rear(node*&head)
    {
        node*temp=head;
        head=head->next;
        delete temp;
    }
    void disp(node*head)
    {
        while (head != NULL)
        {
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
    }
};
int main()
{
    node*head=NULL;
    queue q;
    q.queue_front(head,12);
    q.queue_front(head,78);
    q.queue_rear(head,10);
   // q.dequeue_front(head);
    q.disp(head);
    return 0;
}