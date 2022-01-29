#include<iostream>
using namespace std;
class node
{
    public:
   int data;
   node*next=NULL;
   node(int d)
   {
       data=d;
   }
};
class queue
{
    public:
    bool isEmpty(node*head)
    {
        if(head==NULL) return true;
        else return false;
    }
    void enqueue(node*&head,int val)
    {
        node*a=new node(val);
        if(isEmpty(head))
        {
            head=a;
        }
        else
        {
            node*temp=head;
            while (temp->next!=NULL)
            {
                temp=temp->next;
            }
                temp->next=a;
            
        }
     }
     void dequeue(node*&head)
     {
        if(isEmpty(head)) cout<<"can't dequeue";
        else{
            
        node*temp=head;
        head=head->next;
        delete temp;
        }
         
     }
     void disp(node *head)
    {
        while (head != NULL)
        {
            cout << head->data << " ";
            head = head->next;
        }
    }
};

int main()
{
    node*head=NULL;
    queue a;
    a.enqueue(head,232);
    a.enqueue(head,90);
    a.enqueue(head,1000);
    a.enqueue(head,112);
    a.enqueue(head,11122);
    a.dequeue(head);
    a.disp(head);
    return 0;
}