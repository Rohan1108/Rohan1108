#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
	// ll t; cin>>t;
	// while(t--)
	// {
	// }
	ll n;
	cin>>n;
	ll a[n],b[n],c[100001];
	memset(c,0,sizeof(c));
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(ll i=0;i<n;i++)
	{
		cin>>b[i];
		c[b[i]] += i+1;
	}
	ll maxi = INT_MIN,ans = 0;
	for(ll i=0;i<n;i++)
	{
		ll x = c[a[i]];
		if(x<maxi)
		{
			ans++;
		}
		maxi = max(maxi,x);
	}
	cout<<ans;
}
