#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    
    node *next = NULL;
    node(int n)
    {
        data = n;
    }
    
};
class llist
{
    public:
    node *head = NULL;
    node *temp;
    void mov_last()
    {
        temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        node *a = temp->next;
        temp->next = NULL;
        a->next = head;
        head = a;
    }
    void reverse()
    {
        node *one = head;
        node *two = head->next;
        ;
        node *three = head->next->next;
        while (two != NULL)
        {
            two->next = one;
            one = two;
            two = three;
            three = three->next;
            if (three == NULL)
            {
                head = two;
            }
        }
    }
    void push(int n)
    {
        node *x = new node(n);
        if (head == NULL)
        {
            head = x;
            return;
        }
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = x;
    }
    void printll()
    {
        temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
int main()
{
    llist l;
    int n;
    cin >> n;
    int g;
    while (n--)
    {
        cin >> g;
        l.push(g);
    }
    l.printll();
    l.reverse();
    l.printll();
    return 0;
}