#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        vector<ll> B(n);
        for(auto& i: B)cin>>i;
        ll ans=n+n-1;
        
        for(ll i=0;i<n-2;i++)
        {   
            if(!(B[i]>=B[i+1]&&B[i+1]>=B[i+2]) && !(B[i]<=B[i+1]&&B[i+1]<=B[i+2]))
            {
                ans++;
            }
            
        }
        for(ll i=0;i<n-3;i++)
        {
            if(B[i]>=B[i+1]&&B[i+1]>=B[i+2]){}
            else if(B[i]>=B[i+1]&&B[i+1]>=B[i+3]){}
            else if(B[i]>=B[i+2]&&B[i+2]>=B[i+3]){}
            else if(B[i+1]>=B[i+2]&&B[i+2]>=B[i+3]){}
            else if(B[i]<=B[i+1]&&B[i+1]<=B[i+2]){}
            else if(B[i]<=B[i+1]&&B[i+1]<=B[i+3]){}
            else if(B[i]<=B[i+2]&&B[i+2]<=B[i+3]){}
            else if(B[i+1]<=B[i+2]&&B[i+2]<=B[i+3]){}
            else {ans++;}
        }
        if(n==1)cout<<"1"<<endl;
        else if(n==2)cout<<"3"<<endl;
        else cout<<ans<<endl;
        
    }
}
