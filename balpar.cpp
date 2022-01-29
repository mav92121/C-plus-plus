#include<iostream>
#include<stack>
using namespace std;
bool isBalanced(string str)
{
    bool ans=true;
    stack<char> s;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='{' || str[i]=='(' || str[i]=='[')
        {
            s.push(str[i]);
        }
        else if(str[i]=='}')
        {
            if(s.top()=='{')
            {
                s.pop();
            }
            else
            {
                ans=false;
                break;
            }
        }
         else if(str[i]==')')
        {
            if(s.top()=='(')
            {
                s.pop();
            }
            else
            {
                ans=false;
                break;
            }
        }
         else if(str[i]==']')
        {
            if(s.top()=='[')
            {
                s.pop();
            }
            else
            {
                ans=false;
                break;
            }
        }
    }
    if(ans && s.size()==0) return true;
    else return false;
}
int main()
{
    string s="(){}[]({[])";
    if(isBalanced(s)) cout<<"Balanced ";
    else cout<<"Not Balanced";
}