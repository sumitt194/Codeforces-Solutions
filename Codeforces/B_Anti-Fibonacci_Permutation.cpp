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
        int a[n], j = n - 1, k = n - 2, m =n;
        for (int i = 0; i < n; i++)
        {
            a[i] = m;
            m--;
        }
        int z = n;
        int flag = 0;
        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
            flag++;
        }
        cout << endl;
        while (z > 1 && flag == n)
        {
            swap(a[j], a[k]);

            for (int i = 0; i < n && ans == true; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
            z--;
            j--;
            k--;
        }
    }
    return 0;
}