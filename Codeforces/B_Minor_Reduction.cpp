#include <iostream>
using namespace std;

#define ll long long

int reverse(int n)
{
    int result = 0;
    while (n)
    {
        result = result * 10 + (n % 10);
        n = n / 10;
    }
    return result;
}

int digitSum(int n)
{
    int sum = 0;
    while (n)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll maxm = (s[0] + s[1] - '0' - '0'), pos = 0;
        for (ll i = 0; i < sza(s) - 1; i++)
        {
            ll sum = (s[i] - '0' + s[i + 1] - '0');
            if (sum >= 10)
            {
                maxm = sum;
                pos = i;
            }
        }
        for (ll i = 0; i < sza(s); i++)
        {
            if (i == pos)
            {
                cout << maxm;
                i++;
                continue;
            }
            cout << s[i];
        }
        cout << "\n";
    }
    return 0;
}