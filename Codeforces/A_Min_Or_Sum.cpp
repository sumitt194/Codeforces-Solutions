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
        int a[n], x = 0, flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i == 2)
                flag = 1;
        }
        x = a[0];
        for (int j = 0; j < n; j++)
            x = x | a[j];

        cout << x << endl;
    }
    return 0;
}