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
        int flag = 0, size = 1;
        int a[n], pos = n - 2;
        int ans = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
        {
            if (a[i] != a[0])
            {
                flag = 1;
                break;
            }
        }

        if (n == 1 || flag == 0)
        {
            cout << "0" << endl;
            continue;
        }

        while (pos >= 0)
        {
            if (a[pos] == a[n - 1])
            {
                pos--;
                size++;  
            }
            else
            {
                pos -= size;
                ans++;
                size *= 2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}