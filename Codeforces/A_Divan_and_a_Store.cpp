#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
int t = 0;
cin>>t;
while(t--)
{
    ll n,l,r,k;
    cin>>n>>l>>r>>k;
    ll a[n];
    vector<ll> v;
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
        if(a[i]>=l && a[i]<=r)
            v.push_back(a[i]);
    }
    sort(v.begin(), v.end());
    ll count = 0, sum = 0; 
    for(int i = 0 ; i<v.size() ; i++){
        if(k>=v[i]){
            k-=v[i];
            count++;
        }
    }
    cout<<count<<endl;
}
    return 0;
}