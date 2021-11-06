#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

ll mod = 1e9 + 7;

ll power(ll a, ll b)
{
   if (b == 0) return 1;
   if (b == 1) return a;
   ll ret = (power(a, b / 2))%mod;
   if (b % 2 == 0) return (ret * ret) % mod;
   return ((ret * ret) % mod * a) % mod;
}

int main()
{
	ll t; cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		ll a[n];
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		k += 1;
		ll ans = 0;
		for(ll i=1;i<n;i++)
		{
			ll x = a[i] - a[i-1];
			ll y = power(10,x);
			ans += power(10,a[i-1])*min(y-1,k);
			k = k - min(y-1,k);
		}
		ans += k*power(10,a[n-1]);
		cout<<ans<<endl;
	}
}	
 
