#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*next;
    node(int d)
    {
        data=d;
        next=NULL;
    }
};
class stacks
{
    public:
    node*head=NULL;
    bool isEmpty()
    {
        if(head==NULL)return true;
        else return false;
    }
    void push(int d)
    {
        node*newn=new node(d);
        node*temp=head;
        if(temp==NULL)
        {
            head=newn;
        }
        else
        {
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newn;
        }
    }
    void pop()
    {
        node*temp=head;
        if(temp==NULL)
        {
            cout<<"Stack underflow "<<endl; return;
        }
        while (temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=NULL;
        
    }
    void disp()
    {
        node*temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main()
{
    stacks s;
    s.push(3);
    s.push(10);
    s.push(34);
    s.push(100);
    s.push(123);
    s.pop();
    s.disp();
}