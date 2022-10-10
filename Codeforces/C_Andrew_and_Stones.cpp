#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        ll n, ans = 0;
        cin >> n;
        vector<ll> v(n + 5);
        vector<ll> vec(n + 5);
        bool flag = 1;
        int z = 0;
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            v[i] = x;
            vec[i] = v[i];
        }
        if (z==0 && n==3)
        {
            if (v[1] % 2 && z==0)
                cout << "-1" << endl;
            else
                cout << (v[1] / 2) << endl;
            continue;
        }
        for (int i = 1; i < (n - 1); i++)
        {
            if (v[i] > 1)
                flag = 0;
            z++;
        }
        if (flag)
        {
            cout << -1 << endl;
            z=1;
            continue;
        }
        for (int i = 1; i < n - 1; i++){
            ans =ans+ (v[i] + 1) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}