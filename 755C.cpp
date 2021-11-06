#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back

const ll x = 1e5 + 6;
vector<ll> adj_list[x];
bool visited[x]; 
ll n,rep[x];

void dfs(ll node)
{
	visited[node] = true;
    for(ll u: adj_list[node])
    {
        if(!visited[u])
        {
            dfs(u);
        }
    }
}

// ll count_component()
// {
//     ll count=0;
//     for(ll i=1;i<=n;i++)
//     {
//         if(!visited[i])
//         {
//             rep[count++] = i;
//             dfs(i);
//         }
//     }
//     return count;
// }

int main()
{
	// ll t; cin>>t;
	// while(t--)
	// {
	// } 
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		  ll x;
		  cin>>x;
		  x--;
      adj_list[x].pb(i);
      adj_list[i].pb(x);
	}
	ll count=0;
    for(ll i=0;i<n;i++)
    {
        if(!visited[i])
        {
          count++;
          dfs(i);
        }
    }
    cout<<count<<endl;
}
