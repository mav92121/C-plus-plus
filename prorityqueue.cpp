#include<iostream>
using namespace std;
class node
{   
    public:
    node*head=NULL;
    int data,priroty;
    node*next=NULL;
    node()
    {

    }
    node(int p,int d)
    {
        priroty=p;
        data=d;
    }
    void enqueue(int p,int d)
    {
        node*n=new node(p,d);
        if(head==NULL)
        {
            head=n;
        }
        else
        {
            node*temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=n;
        }
    }
    void print()
    {
        node*temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void dequeue()
    {
        node*ans=head;
        node*temp=head;
        while (temp!=NULL)
        {
            if(temp->priroty<ans->priroty) ans=temp;
            temp=temp->next;
        }
        if(ans==head)
        {
            head=ans->next;
        }
        else
        {
            node*t=head;
            while(t->next!=ans)
            {
                t=t->next;
            }
            t->next=ans->next;
        }
        
    }

};
int main()
{
    node n;
    n.enqueue(0,13);
    n.enqueue(2,15);
    n.enqueue(0,12);
    n.enqueue(7,8);
    n.enqueue(4,9);
    n.enqueue(3,10);
    n.dequeue();
    n.print();
}