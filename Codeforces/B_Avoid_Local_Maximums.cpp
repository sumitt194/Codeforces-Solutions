#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], ans = 0;
        bool result = false;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (n <= 2)
        {
            cout << "0" << endl;
            for (int i = 0; i < n; i++)
                cout << a[i] << " ";
            cout << endl;
            continue;
        }
        else
        {
            for (int i = 1; i < n - 1; i++)
            {
                if (a[i] > a[i - 1] && a[i] > a[i + 1])
                {

                    int x = i + 2;
                    int temp;
                    if (x < n) temp = a[x];
                    else temp = INT_MIN;
                    a[i + 1] = max(a[i], temp);
                    ans++;
                    result = !result;
                }
            }
            cout << ans << endl;
            result = true;
            for (int i = 0; i < n; i++)
                cout<<a[i]<<" ";
            cout << endl;
        }
    }
    return 0;
}