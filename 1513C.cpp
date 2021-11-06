#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios::sync_with_stdio(0) , cin.tie(0) , cout.tie(0) ;
const int shit=2e5+50;
ll dp[shit] = {1,1,1,1,1,1,1,1,1,1};
const ll mod = 1e9+7;

int main()
{
    fast
    for(ll i=10;i<shit;i++)
    {
        dp[i] = (dp[i-10]+dp[i-9])%mod;
    }
    ll t; cin>>t;
    while(t--)
    {
        ll n,m,ans=0;
        cin>>n>>m;
        while(n)
        {
            ll ld = n%10;
            ans = (ans+dp[m+ld])%mod;
            n/=10;
        }
        cout<<ans<<endl;
    }
}
