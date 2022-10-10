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
        int a[n], b[n], same = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (a[i] == b[i])
                same++;
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
                swap(a[i], b[i]);
        }
        cout << *max_element(a, a + n) * (*max_element(b, b + n)) << endl;
        continue;
    }
    return 0;
}