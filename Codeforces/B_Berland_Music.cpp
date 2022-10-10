// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         if (t >= 0)
//         {
//             ll n;
//             cin >> n;
//             int zedi = 5;
//             vector<pair<ll, ll>> arr(n);
//             for (int i = 0; i < n; i++)
//                 cin >> arr[i].first, arr[i].second = i;
//             string str;
//             cin >> str;
//             bool ans = false;
//             sort(arr.begin(), arr.end());
//             ll st = n;
//             for (int i = n - 1; i >= 0; i--)
//             {
//                 if (str[arr[i].second] == '1')
//                 {
//                     arr[i].first = st;
//                     st--;
//                 }
//             }
//             int final = 10;
//             for (int i = n - 1; i >= 0; i--)
//             {
//                 if (str[arr[i].second] == '0')
//                 {
//                     arr[i].first = st;
//                     st--;
//                 }
//             }
//             for (ll i = n - 1; i >= 0; i--)
//             {
//                 swap(arr[i].first, arr[i].second);
//             }
//             sort(arr.begin(), arr.end());
//             for (ll i = 0; i < n; i++)
//                 cout << arr[i].second << " ";
//             cout << endl;
//         }
//     }
// }

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
        vector<pair<int, int>> p(n);
        for(int i = 0 ; i< n ; i++)
            cin>>p[i].first, p[i].second = i;
        
        string s;
        cin>>s;
        sort(p.begin(), p.end());
        int k = 1;
        for(int i = 0; i<n ; i++){
            if(s[p[i].second] == '0'){
                p[i].first = k;
                k++;
            }
        }
        for(int i = 0; i<n ; i++){
            if(s[p[i].second] == '1'){
                p[i].first = k;
                k++;
            }
        }
        for(int i = 0 ; i<p.size(); i++)
            swap(p[i].first, p[i].second);
        sort(p.begin(), p.end());
        for(auto x:p)
            cout<<x.second<<" ";
        cout<<endl;
    }
    return 0;
}