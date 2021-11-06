#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll m;
        cin >> m;
        ll a[2][m];
        for(ll i=0;i<m;i++)
        {
            cin>>a[0][i];
        }
        for(ll i=0;i<m;i++)
        {
            cin >> a[1][i];
        }
        ll sum1 = 0,sum2 = 0;
        for(ll i=1;i<m;i++)
        {
            sum1+=a[0][i];
        }
        ll max,min;
        if(sum1>sum2)
         max = sum1;
        else max = sum2;
        min = max;
        for(ll i=1;i<m;i++)
        {
            sum2 += a[1][i-1];
            sum1 -= a[0][i];
            if(sum1>sum2)
             max = sum1;
            else
             max = sum2;
            if(min>max)
             min = max;
        }
        cout<<min<<endl;
    }
}
