#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        
        if (l == r && (l != 1 && r != 1))
        {
            cout << "YES" << endl;
            continue;
        }
        else if (l == 1 && r == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            int odd = (r - l + 1) / 2;
            int even = (r - l + 1) / 2;
            if (r % 2 == l % 2)
            {
                if (r % 2 == 1)
                    odd++;
                else
                    even++;
            }
            if (odd <= k)
                cout << "YES" << endl;
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}