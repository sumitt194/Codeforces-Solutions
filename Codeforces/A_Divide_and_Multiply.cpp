#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;
    ll a[n];
    vector<ll> even, odd;
    for(int i = 0; i<n;i++)
            cin >> a[i];
    for(int i = 0; i<n;i++)
    {
        if (a[i] % 2 == 0)
            even.push_back(a[i]);
        else
            odd.push_back(a[i]);
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    ll int sum=1;
    if(odd.size()==0){
        for(int i = 0; i< even.size(); i++){
            sum*=even[i];
        }
        sum+=even.size()-1;
    }
    else{
        sum=odd[odd.size()-1];
        for(int i = 0; i< even.size(); i++){
            sum*=even[i];
        }
        sum+=even.size();
        for(int i = 0; i< odd.size()-1; i++){
            sum+=odd[i];
        }
    }
    cout<<sum<<endl;
    }
}


