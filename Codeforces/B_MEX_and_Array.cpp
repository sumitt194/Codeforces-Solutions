
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
        ll a[n], result=0;
        bool flag = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            ll zeroes = 0;
            ll x = 0;
            for (int k = i; k < n; k++)
            {
                if (a[k] == 0)
                    zeroes=zeroes+1;
                x = x+(k - i + 1);
                x =x+ zeroes;
            }
            result += x;
            flag =1;
        }
        cout << result;
        cout<<endl;
    }
    return 0;
}