#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
int t = 0;
cin>>t;
while(t--)
{
    ll n, x, y;
    cin>>n>>x>>y;
    ll a[n],sum = 0;
    for(int i = 1 ; i<= n ; i++){
        cin>>a[i];
        sum += (a[i] % 2);
    }
    ll temp = x+sum;
    if(temp % 2 == y % 2){
        cout<<"Alice"<<endl;
        continue;
    }else{
        cout<<"Bob"<<endl;
    }
    
}
    return 0;
}


