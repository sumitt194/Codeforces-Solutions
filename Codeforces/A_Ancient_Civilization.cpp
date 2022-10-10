#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        ll n, l;
        cin >> n >> l;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<ll> pos(32, 0);
        for (ll x : a)
        {
            for (int j = 0; j < l; j++)
            {
                if (x & (1 << j))
                    pos[j]++;
            }
        }
        ll ans = 0;
        for (int i = 0; i < l; i++)
        {
            ll cnt1 = pos[i];
            ll cnt0 = n - pos[i];
            if (cnt1 > cnt0)
                ans += (1 << i);
        }
        cout << ans << endl;
    }
    return 0;
}