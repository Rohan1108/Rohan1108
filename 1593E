#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back

int main()
{
	ll t; cin>>t;
	while(t--)
	{
		    ll n,k;
        cin>>n>>k;
        vector<ll> adj[n+5];
        ll a[n+5];
        memset(a, 0, sizeof(a));
        for(ll i=0;i<n-1;i++)
        {
            ll u, v;
            cin>>u>>v;
            adj[u].pb(v);
            adj[v].pb(u);
            a[u]++;
            a[v]++;
        }
         if(n <= 2)
        {
            cout<<"0"<<endl;
            continue;
        }
        bool vis[n+5];
        memset(vis, false, sizeof(vis));
        queue<ll> q;
        for(ll i=1;i<=n;i++)
        {
            if(a[i] == 1)
            {
                // cout<<i<<" ";
                q.push(i);
                vis[i] = true;
            }
        }
        // cout<<endl;
        ll ans = 0;
        while(!q.empty() && k--)
        {
            ans += q.size();
            ll s = q.size();
            for(ll i=0;i<s;i++)
            {
                ll u = q.front();
                q.pop();
                for(auto j : adj[u])
                {
                    if(!vis[j])
                    {
                        a[j]--;
                        if(a[j] == 1)
                        {
                            vis[j] = true;
                            q.push(j);
                        }
                    }
                }
            }
        }
        cout<<n-ans<<endl;
	}
}
