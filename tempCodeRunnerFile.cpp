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
// #define int long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    vector<int>odd;
    vector<int>even;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            even.push_back(arr[i]);
        }
        else odd.push_back(arr[i]);
    } 
    int odd_len=odd.size();
    int even_len=even.size();
    if(odd_len%2!=0)
    {
        if(even_len==0) cout<<-1<<endl;
        else
        {
            for(int i=0;i<odd_len-1;i++)
            {
                cout<<odd[i]<<" ";
            }
            cout<<even[0]<<" "<<odd[odd_len-1]<<" ";
            for(int i=1;i<even_len;i++)
            {
                cout<<even[i]<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        if(odd_len==0)
        {
            cout<<-1<<endl;
            return;
        }
        else
        {
            for(int i=0;i<odd_len;i++) cout<<odd[i]<<" ";
            for(int i=0;i<even_len;i++) cout<<even[i]<<" ";
            cout<<endl;
        }
    }
}
int main()
{
    // ios_base::sync_with_stdio(false);cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}