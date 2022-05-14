#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> &stalls,int d,int k)
{
	int cow=1;
	int temp=0;
	for(int i=1;i<stalls.size();i++)
	{
		if(stalls[i]-stalls[temp]>=d)
		{
			cow++;
			temp=i;
		}
		if(cow==k)
			return true;
	}
	return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
	int n=stalls.size();
	int s=1;
	int e=stalls[n-1]-stalls[0];
	int mid;
	int ans;
	while(s<=e)
	{
		mid=(s+e)/2;
		if(isPossible(stalls,mid,k))
		{
			ans=mid;
			s=mid+1;
		}
		else
		{
			e=mid-1;
		}
	}
	// cout<<ans<<endl;
    return ans;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        cout<<aggressiveCows(v,k)<<endl;

    }
}