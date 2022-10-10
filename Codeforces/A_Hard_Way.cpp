#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        vector<pair<int,int>> v(3);
        int ans = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> v[i].second >> v[i].first;
            ans++;
        }
        sort(v.begin(), v.end());
        if (ans ==3 && v[2].first - v[1].first == 0 )
        {
            float diff= abs(v[2].second - v[1].second);
            cout << setprecision(12) << diff;
            cout<<endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}