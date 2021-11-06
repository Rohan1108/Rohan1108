#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

ll mod = 1e9 + 7;

int main()
{
	// ll t; cin>>t;
	// while(t--)
	// {
	// }
	ll x,y,n;
	cin>>x>>y>>n;
	ll ans = 0;
	if(n%3==0 && n%2==1)
	{
		ans = ((y-x)%mod+mod)%mod;
	}
	else if(n%3==0 && n%2==0)
	{
		ans = ((x-y)%mod+mod)%mod;
	}
	else if(n%3==1 && (n-1)%2==1)
	{
		ans = ((-x)%mod+mod)%mod;
	}
	else if(n%3==2 && (n-2)%2==1)
	{
		ans = ((-y)%mod+mod)%mod;
	}
	else if(n%3==1 && (n-1)%2==0)
	{
		ans = ((x)%mod+mod)%mod;
	}
	else if(n%3==2 && (n-2)%2==0)
	{
		ans = ((y)%mod+mod)%mod;
	}
	cout<<ans;
}
