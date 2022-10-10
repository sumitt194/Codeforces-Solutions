#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;

        vector<ll,ll> arr(n);
        cin >> arr;
        vector<ll,ll> dp(n + 1, -1LL * 1e12);

        for (int i = 0; i < n; i++)
        {
            ll val = 0;
            for (int j = i; j < n; j++)
            {
                val += arr[j];
                dp[j - i + 1] = max(dp[j - i + 1], val);
            }
        }

        for (ll i = 0; i <= n; i++)
        {
            ll res = 0;
            for (ll j = 1; j <= n; j++)
            {
                res = max(res, dp[j] + (min(i, j) * x));
            }
            cout << res << " ";
        }
        cout << endl;
    }
    return 0;
}