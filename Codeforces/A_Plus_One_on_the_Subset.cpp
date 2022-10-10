#include<bits/stdc++.h>
using namespace std;

#define ll long long



int main() {
    int t;
    cin>>t;
    while(t--){
        if(t>=0){
            ll n;
            cin>>n;
            vector<ll> a(n);
            for(int i = 0; i< n ; i++)
                cin>>a[i];

            sort(a.begin(), a.end());
            cout<<a[n-1]-a[0]<<endl;
        }
    }
}