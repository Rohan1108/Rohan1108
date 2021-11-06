#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{

//  ll t; cin>>t;
//  while(t--)
//  {
//  }
    ll n;
    cin>>n;
    ll a[n+1]={0};
    ll c = 2;
    for(ll i=2;i<=n;i++)
    {
       if(i%2==0)
       {
           a[i] = 1;
       }
       else
       {
           ll j = i;
           ll f = -1;
           for(ll k=2;k<=sqrt(j);k++)
           {
               if(j%k==0)
               {
                   a[j] = a[k];
                   f = 1;
                   break;
               }
           }
           if(f==-1)
           {
               a[j] = c;
               c++;
           }
        }  
    }
    for(ll i=2;i<=n;i++)
    {
       cout<<a[i]<<" ";
    }
}   
