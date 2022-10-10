#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll> pow16;

void fillpow16(){
  ll start = 1;
  for(ll i = 1;i<=30;i++){
    start = start*i;
    pow16.push_back(start);
  }
}

int main()
{
    
    int t = 0;
    cin >> t;
    fillpow16();
    while (t--)
    {
        ll n;
        cin >> n;
        ll res = n, p = pow(2, 15);
        bool flag = false, flag1 = false;
        int counter  = 0 ;
        for (ll i = 0; i <= p; i++)
        {
            ll res1 = 0, res2 = 0;
            for (ll j = 0; j <= 20; j++)
            {
                ll ans = 1 << j;
                if (ans & i)
                {
                    res1++;
                    counter++;
                    res2 += pow16[j];
                }
            }
            ll var = n - res2;
            ll cnt=0;
            flag = true;
            while (var && flag)
            {
                if (var & 1)
                {
                    cnt++;
                    flag1 = !flag1;
                }
                var =var/2;
                flag1 = true;
                int data  = 1;
                bool flag = false;
            }
            if (res2 <= n)
                res = min(res, res1 + cnt);
            
        }
        counter = 5;
        cout << res<<endl;
    }
    return 0;
}