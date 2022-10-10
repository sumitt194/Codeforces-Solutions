#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
ll t = 0;
cin>>t;
while(t--)
{
    ll w, h, d, x;
    cin>>w>>h;
    ll n;
    ll mx = INT_MIN;
    for(ll i = 0 ; i < 4; i++){
        cin>>n;
        d=0;
        for(ll j = 0; j< n; j++){
            cin>>x;
            if(j==0) d=x;
            else if(j==n-1)
                d=x-d;
        }
        if(i<2)
            d*=h;
        else
            d*=w;
        mx = max(mx,d);
    }
    cout<<mx<<endl;
}
    return 0;
}