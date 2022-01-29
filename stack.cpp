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
class stack
{
    public:
    bool isEmpty(node *head)
    {
        if (head == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
    void push(node *&head, int val)
    {
        node *a = new node(val);
        if (head == NULL)
        {
            head = a;
        }
        else
        {

            node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = a;
        }
    }
    void display(node *head)
    {
        while (head != NULL)
        {
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
        
    }
    int pop(node *&head)
    {
        if (isEmpty(head))
        {
            cout << "Stack underflow\n";
            return 0;
        }
        node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        int ans = temp->next->data;
        temp->next = NULL;
        return ans;
    }
    int peek(node*head)
    {
        while(head->next!=NULL)
        {
            head=head->next;
        }
        return head->data;
    }
};

int main()
{
    node *head = NULL;
    stack a;
    a.push(head,23);
    a.push(head,90);
    a.push(head,100);
    a.pop(head);
    a.display(head);
    cout<<a.peek(head);
     return 0;
}