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
        string s;
        cin >> s;
        string t = "Timru";
        
        if (s.length() != t.length())
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            sort(s.begin(), s.end());
            if (s == t )
            {
                cout << "YES" << endl;
                continue;
            }
            else
            {
                cout << "NO" << endl;
                continue;
            }
        }
    }
    return 0;
}