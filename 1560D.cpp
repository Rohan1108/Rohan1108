#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(ll a, ll b)
{
    ll k = 1,l = 1;
    ll d1 = 0, d2 = 0;
    while(k<=a)
    {
        k*= 10;
        d1++;
    }
    while(l<=b)
    {
        l*= 10;
        d2++;
    }
    k /= 10;
    l /= 10;
    while(l != 0 && k != 0)
    {
        if((a/k)%10==(b/l)%10)
        {
            k/=10;
            d1--;
            d2--;
        }
        l /= 10;
    }
    return d1 + d2;
}

int main()
{
    ll a[60];
    ll k = 1;
    for(ll i=0;i<60;i++)
    {
        a[i] = k;
        k *= 2;
    }
    ll t; cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll l = 1, m = 0;
        while(l<n)
        {
            l *= 10;
            m++;
        }
        ll min = m + 1;
        for(ll i=0;i<60;i++)
        {
            if(solve(a[i], n)<min)
            {
            	 min = solve(a[i], n);
            }
        }
        cout<<min<<endl;
    }
}
