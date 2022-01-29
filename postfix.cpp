#include <iostream>
#include <stack>
using namespace std;
int ans(string s)
{
    stack<int> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
        {
            st.push((s[i]) - 48);
        }
        else if (s[i] == '*')
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            int c = a * b;
            st.push(c);
        }
        else if (s[i] == '/')
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            int c =b/a;
            st.push(c);
        }
        else if (s[i] == '+')
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            int c = a +b;
            st.push(c);
        }
        else if (s[i] == '-')
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            int c =b-a;
            st.push(c);
        }
    }
   
    return st.top();
}

int main()
{
    

    return 0;
}