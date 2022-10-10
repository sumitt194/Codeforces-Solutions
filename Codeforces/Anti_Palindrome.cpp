#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        string result;
        ll ans = 0;
        map<char, ll> m;
        char c = 'a';
        if (n % 2)
        {
            cout << "NO" << endl;
            continue;
        }

        for (auto x : s)
        {
            m[x]++;
        }
        for (auto x : m)
        {
            if (x.second > ans)
            {
                ans = x.second;
                c = x.first;
            }
        }
        if (ans > (n / 2))
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        for (int i = 0; i < m[c]; i++)
        {
            if (result.size() == (n / 2))
            {
                cout << c;
            }
            else
            {
                result.push_back(c);
            }
        }
        for (auto x : m)
        {
            if (x.first == c)
            {
                continue;
            }
            for (int i = 0; i < x.second; i++)
            {
                if (result.size() == (n / 2))
                {
                    cout << x.first;
                }
                else
                {
                    result.push_back(x.first);
                }
            }
        }

        reverse(result.begin(), result.end());
        cout << result << endl;
    }
    return 0;
}