#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mii map<int,int>

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], ans = 0;
        mii mp;
        bool res= false;
        for (int i = 0; i < n; i++){
            cin>>a[i];
            if(i == n-1)
                res=true;
        }
            
        int flag = 0;
        for (int i = 0; i < n && res == true; i++)
        {
            mp[a[i]] += 1;
            if (mp[a[i]] == 1)
            {
                flag++;
                ans++;
            }
        }

        for (int i = 0; i < n && flag >=0; ++i)
        {
            if (ans >= i + 1)
            {
                cout << ans;
                flag++;
            }
            else
            {
                cout << i + 1;
            }
            cout << " ";
        }
        flag--;
        cout << endl;
    }
    return 0;
}