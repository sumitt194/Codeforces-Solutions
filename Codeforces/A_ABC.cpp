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
        (s.length() == 1 || (s.length() == 2 && s[0]!=s[1])) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    return 0;
}