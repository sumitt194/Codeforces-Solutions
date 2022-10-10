#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        ll hC, dC;
        cin >> hC >> dC;
        ll hM, dM;
        cin >> hM >> dM;
        ll k, w, a;
        cin >> k >> w >> a;
        ll flag = 0;
        for (ll i = 0; i <= k; i++)
        {

            ll shield = (k - i) * a;
            ll weapon = i * w;
            ll hC1 = hC + shield;
            ll dC1 = dC + weapon;
            ll point = hM / dC1;
            ll point_next;
            if (hM % dC1 != 0)
            {
                point++;
            }
            point_next = point - 1;

            if ((hC1 - dM * point_next) > 0)
            {
                flag = 1;
            }
        }
        (flag == 1) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}