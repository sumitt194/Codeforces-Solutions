#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a;
        cin >> b;
        ll ans = b - a;
        for (int i = b; i <= 2 * b; i++)
        {
            ans = min(ans, (a | i) - i + 1 + i - b);
        }
        ll zed = ans;
        for (int i = a; i <= b; i++)
        {
            ans = min(ans, (i | b) - b + 1 + i - a);
        }

        cout << ans;
        cout<<endl;
    }
    return 0;
}