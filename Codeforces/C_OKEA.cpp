#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll sum;
        ll temp = 1;
        ll result = 2;
        if(k==1){
            cout<<"YES"<<endl;
            for(int i = 1; i<=n ; i++)
                cout<<i<<endl;
            continue;
        }
        if(n%2){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        for(int i = 1; i<=n*k;i+=2){
            int c = 0 ; 
            while(c<k){
                cout<<i<<" ";
                c++, i+=2;
            }
            i-=2;
            cout<<endl;
        }
        for(int i = 2; i<=n*k;i+=2){
            int c = 0 ; 
            while(c<k){
                cout<<i<<" ";
                c++, i+=2;
            }
            i-=2;
            cout<<endl;
        }
    }
    return 0;
}