#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll t; cin>>t; 
	while(t--)
	{
		    ll n;
        cin>>n;
        string s;
        cin>>s;
        ll i;
        if(n==2)
        {
            if(s[0]=='1')
            cout<<1<<" "<<2<<" "<<1<<" "<<1<<endl;
            else 
            cout<<1<<" "<<2<<" "<<2<<" "<<2<<endl;
            continue;
        }
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
            	break;
            }
        }
        if(i==n)
        {
            cout<<1<<" "<<n - 1<<" "<<2<<" "<<n<<endl;
        }
        else
        {
            if(i>=n/2)
            {
                cout<<1<<" "<<i+1<<" "<<1<<" "<<i<<endl;
            }
            else
            {
                cout<<i+1<<" "<<n<<" "<<i+2<<" "<<n<<endl;
            }    
        }
	}
}
