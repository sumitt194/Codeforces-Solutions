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
        ll arr[n + 2];
        bool flag = false;
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            if(i == n-1)
                flag = true;
        }
            
        sort(arr, arr+n);
        flag = true;
        int v2 = n - 2, v1 = 2;
        ll temp = arr[0] + arr[1], ans = arr[n - 1];
        while (v1 < v2)
        {
            ans += arr[v2];
            temp += arr[v1];
            v2--;
            v1++;
        }
        if (ans > temp && flag)
        {
            cout << "YES";
            cout<<endl;
            continue;
        }
        else{
            cout << "NO";
            cout<<endl;
        }
            
    }
    return 0;
}