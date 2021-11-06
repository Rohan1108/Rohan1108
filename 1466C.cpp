#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
  ll t; cin>>t;
  while(t--)
  {
    string s; 
    cin>>s;
    ll n = s.length();
    if(n==1)
      {
          cout<<"0"<<endl;     
      }
      else if(n==2)
      {
        if(s[0]==s[1])
          {
              cout<<"1"<<endl;
          }
          else
          {
              cout<<"0"<<endl;
          }
      }
      else
      {
        for(ll i=1;i<n;i++)
        {
          if(s[i-1]==s[i] || (i-2>=0 && s[i]==s[i-2]))
          {
            s[i] = '?';
          }
        }
        ll ans = 0;
          for(ll i=0;i<n;i++)
          {
            if(s[i]=='?')
            {
              ans++;
            }
          }
          cout<<ans<<endl;
      }
  }
}
