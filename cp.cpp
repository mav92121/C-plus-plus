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
#define ll long long int
// typedef unsigned long long int ll;
#define endl "\n"
using namespace std;
void seive(int n)
{
    vector<int>v(n+1);
    for(int i=2;i<=n;i++)
    {
        for(int j=i+i;j<=n;j+=i)
        {
            v[j]=1;
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(v[i]==0)cout<<i<<" ";
    }
    cout<<endl;
}
bool isPrime(int n)
{
    if(n==2) return true;
    else if(n%2==0) return false;
    else
    {
        bool check=true;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                check=false;
                return false;
            }
        }
        return true;
    }
}
void solve()
{
      
}

int main()
{
// ios_base::sync_with_stdio(false);cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
