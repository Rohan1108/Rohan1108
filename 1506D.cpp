#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n,count=0;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll temp=1;
        vector<ll>b;
       for(ll i=1;i<n;i++)
       {
           if(a[i]!=a[i-1])
           {
               b.push_back(temp);
               temp=1;
           }
           else temp++;
       }
        b.push_back(temp);
        ll sum=0,maxi=0;
        for(ll i:b)
        {
            sum+=i;
            maxi=max(i,maxi);
        }
        ll ans = min(sum - maxi, sum / 2);
        cout<<n-2*ans<<endl;
    }
}
 
