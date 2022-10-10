#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solveBetter()
{
    int n, m, r, c;
    cin >> n >> m >> r >> c;
    r--;
    c--;
    char a[n + 7][m + 7];
    bool hasB = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            hasB |= (a[i][j] == 'B');
        }
    }
    if (!hasB)
    {
        cout << -1 << '\n';
        return;
    }
    if (a[r][c] == 'B')
    {
        cout << 0 << '\n';
        return;
    }
    bool oneMove = false;
    for (int i = 0; i < n; i++)
    {
        oneMove |= (a[i][c] == 'B');
    }
    for (int j = 0; j < m; j++)
    {
        oneMove |= (a[r][j] == 'B');
    }
    if (oneMove)
    {
        cout << 1 << '\n';
    }
    else
    {
        cout << 2 << '\n';
    }
}

void solve()
{
    int n, m, r, c;
    cin >> n >> m >> r >> c;
    r = r - 1;
    c = c - 1;
    char a[n][m];
    int noB = 0;
    set<int> setRow;
    set<int> setCol;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'B')
            {
                noB++;
                setRow.insert(i);
                setCol.insert(j);
            }
        }
    }

    if (a[r][c] == 'B')
    {
        cout << "0" << endl;
        return;
    }
    else if ((setRow.find(r) != setRow.end() || setCol.find(c) != setCol.end()) && noB != 0)
    {
        cout << "1" << endl;
        return;
    }
    else if (noB != 0)
    {
        cout << "2" << endl;
        return;
    }
    else
    {
        cout << "-1" << endl;
        return;
    }
}

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}