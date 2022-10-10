#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int half = n / 2;

        int arr[n], start = 2, end = n - 1;
        arr[1] = a;
        arr[n] = b;

        for (int i = n; i >= 1; i--)
        {
            if (i != a and i != b)
            {
                arr[start] = i;
                start++;
            }
        }
        int mini = INT_MAX, maxi = INT_MIN;
        for (int i = 1; i <= half; i++)
        {
            mini = min(mini, arr[i]);
        }
        for (int i = half + 1; i <= n; i++)
        {
            maxi = max(maxi, arr[i]);
        }
        if (mini == a and maxi == b)
        {
            for (int i = 1; i <= n; i++)
                cout << arr[i] << " ";
            cout << endl;
        }

        else
            cout << -1 << endl;
    }
    return 0;
}
