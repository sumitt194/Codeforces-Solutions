#include<bits/stdc++.h>
using namespace std;

#define ll long long




int main()
{
int t = 0;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    set<ll> s;
    for (ll i = 1; i * i <= n; i++)
        s.insert(i * i);
    for (ll i = 1; i * i * i <= n; i++)
        s.insert(i * i * i);
        
    cout<<s.size()<<endl;
}
    return 0;
}