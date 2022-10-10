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
        int a[n], a1 = 0, a2 = 0, flag = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(i == n-1) a1 = a[n-1];
            if(i == n-2) a2 = a[n-2];
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i + 1] < a[i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            bool res = true;
            int z = 0;
            if (a2 >= a2 - a1 && a2 <= a1)
            {
                cout << n - 2 << endl;
                for (int i = 0; i < n - 2; i++)
                {
                    res = !res;
                    cout << i + 1 << " " << n - 1 << " " << n;
                    cout << endl;
                    if(res) z++;
                }
                (flag == 1) ? res = true : res = false;
                continue;
            }
            cout << "-1" << endl;
        }
    }
    return 0;
}

