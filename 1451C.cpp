#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
	ll t; cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		string a,b;
		cin>>a>>b;
		ll fre[26]={0},fre1[26]={0};
		for(ll i=0;i<n;i++)
		{
			   fre[a[i] - 'a']++;
         fre1[b[i] - 'a']++;
		}
		for(ll i=0;i<26;i++)
    {
            if(fre[i]>0 && fre1[i]>0)
            {
                ll mx = max(fre[i] , fre1[i]);
                if(mx==fre[i])
                {
                    fre[i]-=fre1[i];
                    fre1[i]=0;
                }
                else
                {
                    fre1[i]-=fre[i];
                    fre[i]=0;
                }
            }
        }
        for(ll i=0;i<26;i++)
        {
            if(fre[i]>0)
            {
                for(ll j=i+1;j<26;j++)
                {
                    if(fre1[j]>0)
                    {
                        ll mx = max(fre[i] , fre1[j]);
                        if(mx==fre[i])
                        {
                            if(fre1[j]%k==0 )
                            {
                                fre[i]-=fre1[j];
                                fre1[j]=0;
                            }
                        }
                        else
                        { 
                            if(fre[i]%k==0)
                            {
                                fre1[j]-=fre[i];
                                fre[i]=0;
                            }
                        }
                    }
                }
            }
        }
        bool flag = true;
        for(ll i=0;i<26;i++)
        {
            if(fre[i]>0 || fre1[i]>0)
            {
                cout<<"No"<<endl;
                flag = false;
                break;
            }
        }
        if(flag) cout<<"Yes"<<endl;
	}
}	
 
