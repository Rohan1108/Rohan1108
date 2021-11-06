#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;

ll power(ll a, ll b)
{
	  ll res = 1;
	  while(b)
    {
        if(b%2)
        {
            res=(res*a)%mod;
        }
        a=(a*a)%mod;
        b=b/2;
    }
    return res;
}

int main()
{
	ll n;
	cin>>n;
	ll ans = 1;
	for(ll i=1;i<=n;i++)
	{
		ans=(ans*i)%mod;
	}
	cout<<(((ans-power(2,n-1))%mod+mod))%mod;
}
