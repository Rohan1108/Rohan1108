#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	ll n;
	cin>>n;
	vector<ll> v(n);
	ll sum = 0;
	for(ll i=0;i<n;i++)
	{
	    cin>>v[i];
	    sum+=v[i];
	}
	sort(v.begin(),v.end());
	ll m;
	cin>>m;
	while(m--)
	{
		ll x,y;
		cin>>x>>y;
		auto it = lower_bound(v.begin(),v.end(),x);
		ll ans = 0 ;
		if(it == v.end())
		{
			ans += (x-v[n-1]);
			if(y>sum-v[n-1])
			ans += (y-(sum-v[n-1]));
		}
		else
		{
			auto it1 = it;
			ll f = *it;
			if(f<x)
			ans+=(x-f);
			if(y>sum- f)
			{
				ans += (y-(sum-f));
			}
			if(it!=v.begin());
			it1--;
			it = it1;
			f = *it;
			ll ds = 0;
			if(f<x)
			ds += (x-f);
			if(y>sum-f)
			{
				ds += (y-(sum-f));
			}
			ans = min(ans,ds);
		}
		cout<<ans<<endl;
	}
}
