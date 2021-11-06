#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

const ll maxn = 200010;
pair<char,ll> a[maxn];

int main()
{
	ll t; cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		for(ll i=1;i<=n;i++)
		{
			cin>>a[i].second;
		}
		for(ll i=1;i<=n;i++) 
		{
			cin>>a[i].first;
		}
		sort(a+1,a+n+1);
		bool flag = 0;
		for(ll i=1;i<=n;i++)
		{
			if((a[i].second>i && a[i].first=='R') || (a[i].second<i && a[i].first=='B'))
			{
				cout << "NO" << endl;
				flag = 1;
				break;
			}
		}
		if(!flag) cout << "YES" << endl;
	}
}	
