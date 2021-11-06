#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
	ll t; cin>>t;
	while(t--)
	{
		ll n; cin>>n;
		map<string,ll> mp;
		string s;
		vector<string> v;
		for(ll i=0;i<n;i++)
		{
			cin>>s;
			v.push_back(s);
			mp[s]++;
		}
		if(mp.size()==n)
		{
			cout<<"0"<<endl;
			for(ll i=0;i<v.size();i++)
			{
				cout<<v[i]<<endl;
			}
		}
		else
		{
			ll ans = 0;
			for(ll i=0;i<n;i++)
			{
				if(mp[v[i]]>1)
			    {
			    	ans++;
			        mp[v[i]]--;
			        for(ll j=0;j<10;j++)
			        {
				        v[i][0] = j + '0';	
				        if(mp[v[i]]==0)
				        {
				    	    mp[v[i]]++;
				    	    break;
				        }		
			        }
			    }
			}
			cout<<ans<<endl;
			for(ll i=0;i<n;i++)
			{
				cout<<v[i]<<endl;
			}
		}
	}
}
