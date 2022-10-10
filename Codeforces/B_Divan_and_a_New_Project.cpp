#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool comp(pair<pair<ll, ll>, int> p, pair<pair<ll, ll>, int> q){
    return q.first.second < p.first.second;
}

int main()
{
int t = 0;
cin>>t;
while(t--)
{
    int n ; 
    cin>>n;
    int a[n];
    vector<pair<pair<ll,ll>, int>> v(n);
    for(int i = 0 ; i < n ; i++){
        int x; 
        cin>>x; 
        a[i] = x;
        v[i].first.first = i+1;
        v[i].first.second = x;
    }
    sort(v.begin(), v.end(), comp);
    int j = 0 , k = 1, l = -1;
    for(int i = 0 ; i< n ; i++){
        if(i % 2 == 0){
            v[i].second = k;
            k++;
        }else{
            v[i].second = l;
            l--;
        }
        j++;
    }
    sort(v.begin(), v.end());
    ll xo = 0, ans = 0;
    for(int i = 0 ; i < n; i++){
        ans += (ll)(2*v[i].first.second*(abs(xo-v[i].second)));
    }
    cout<<ans<<endl;
    cout<<xo<<" ";
    for(int i = 0 ; i < n ; i++)
        cout<<v[i].second<<" ";
    cout<<endl;
}
    return 0;
}