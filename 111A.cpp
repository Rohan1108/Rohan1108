#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
	// ll t; cin>>t;
	// while(t--)
	// {
	// }
	ll a,b,c;
	cin>>a>>b>>c;
	if(a==b && b==c)
	{
		for(ll i=0;i<a;i++)
		{
			cout<<"1"<<endl;
		}
	}
	else if(a>c)
	{
		cout<<"-1";
	}
	else
	{
		ll r = c-a+1;
		ll qa = r*r;
		if(qa+a-1>=b)
		{
			for(ll i=0;i<a-1;i++)
			{
				cout<<"1"<<endl;
			}
			cout<<r<<endl;
		}
		else
		{
			cout<<"-1";
		}
	}	
}
