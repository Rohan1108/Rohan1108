#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    for(ll i=0;i<s.length();i++)
    {
        if(s[i]-'0'==4)
        {
          string s1="322";
          s.replace(i,1,s1);
        }
       else if(s[i]-'0'==6)
       {
          string s1="53";
          s.replace(i,1,s1);
       }
       else if(s[i]-'0'==8)
       {
          string s1="7222";
          s.replace(i,1,s1);
       }
       else if(s[i]-'0'==9)
       {
          string s1="7332";
          s.replace(i,1,s1);
       }
    }
    sort(s.rbegin(),s.rend());
    for(ll i=0;i<s.length();i++)
    {
      if(s[i]=='1' || s[i]=='0')
      break;
      cout<<s[i];
    }
}
