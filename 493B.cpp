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
	ll a[n];
	vector<ll> pos,neg;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>0) pos.push_back(a[i]);
		else neg.push_back(abs(a[i]));
	}
	ll sum1 = 0,sum2 = 0;
	for(ll i=0;i<pos.size();i++)
	{
		sum1 += pos[i];
	}
	for(ll i=0;i<neg.size();i++)
	{
		sum2 += neg[i];
	}
	if(sum1>sum2) cout<<"first";
	else if(sum1<sum2) cout<<"second";
	else if(sum1 == sum2)
	{
		// ll x = min(pos.size(),neg.size());
		// bool flag = true;
		// for(ll i=0;i<x;i++)
		// {
		// 	if(neg[i]>pos[i])
		// 	{
		// 		flag = false;
		// 		break;
		// 	}
		// }
		// if(flag)
		// {
		// 	if(a[n-1]>0) cout<<"first";
		// 	else cout<<"second";
		// }
		// else cout<<"second";
		if(pos>neg) cout<<"first";
		else if(neg>pos) cout<<"second";
		else
		{
			if(a[n-1]>0) cout<<"first";
			else cout<<"second";
		}
	}
}
