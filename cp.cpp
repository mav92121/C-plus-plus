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
// typedef unsigned long long int ll;
#define endl "\n"
using namespace std;
void solve()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++) cin>>arr[i];
   sort(arr,arr+n);
   vector<int>v;
   int count=1;
   for(int i=0;i<n;i++)
   {
       if(arr[i+1]!=arr[i])
       {
           v.push_back(count);
           count=1;
       }
       else 
       {
           count++;
       }
   }
   int ans=0;
    for(int i=0;i<v.size();i++) 
   {
       if(v[i]%2!=0)

       {
           ans++;
           v[i]++;
       } 
   }
   int cou=0;
   for(int i=0;i<v.size();i++) 
   {
       if(v[i]%4==2)
       {
           cou++;
       } 
   }
   if(cou%2!=0) ans+=2;
   cout<<ans<<endl;

}
int main()
{
    // ios_base::sync_with_stdio(false);cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

