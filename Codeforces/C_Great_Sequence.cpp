#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> a(n);
        map<ll,ll> m;
        for(int i = 0 ; i  < n ; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        sort(a.begin(), a.end());
        ll ans = 0;
        for(int i = 0 ; i  < n ; i++)
        {
            if (m[a[i]])
            {
                if (m.find(a[i] * x) == m.end())
                {
                    ans++;
                }
                else
                {
                    m[a[i] * x]--;
                    m[a[i]]--;
                }
            }
        }
        cout << ans<<endl;
    }
    return 0;
}