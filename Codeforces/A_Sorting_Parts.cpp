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
        cin>>n;
        int a[n], copy[n], flag = 1;
        bool noSorted = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            copy[i] = a[i];
        }
        sort(copy, copy + n);
        for (int i = 0; i < n; i++)
        {
            if (copy[i] != a[i])
            {
                flag = 0;
                noSorted = 1;
                break;
            }
        }
        (flag==1) ? cout<<"NO"<<endl : cout<<"YES"<<endl;
    }
    return 0;
}