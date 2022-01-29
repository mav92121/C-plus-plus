// 1 sec= 10^8 operations
// constrains       time complexity
// 10^18             log n
// 10^8              n
// 10^6              n log n
// 10^4              n^2
// 400-500           n^3
// <100              n^4
// 10-11             n!
// 20                2^n
// #define fo(i,a,b) for(int i=a;i<=b;i++)
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
void solve()
{
    int n, x;
    string s;
    cin >> n >> x >> s;
    vector<int> v;
    int count = 0;
    int ma = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            count++;
        else
        {
            if (count != 0)
                v.push_back(count);
            ma = max(ma, count);
            count = 0;
        }
    }
    ma = max(ma, count);
    if (count != 0)
    v.push_back(count);
    int ans=0;
    int tem;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==ma)
        {
            tem=max(v[i]+v[i-1],v[i]+v[i+1]);
            ans=max(ans,tem);
        }
    }
    int temp=int (ans+1)/x;
    cout<<temp<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}