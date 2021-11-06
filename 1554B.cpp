#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   ll t; cin>>t;
   while(t--)
   {
      ll n,k;
      cin>>n>>k;
      vector<ll> v(n);
      for(ll i=0;i<n;i++)
      {
          cin>>v[i];
      }   
      ll ans = INT_MIN;
      for(ll i = max(n-500,0LL);i<n ;i++)
      {
        for(ll j = 0 ;j<n ;j++)
        {
            if(i==j) continue;
            ans = max(ans,((i+1)*(j+1)- (v[i]|v[j])*k));
        }
      }
      cout<<ans<<endl;
   }
}
