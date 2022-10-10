#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
int t = 0;
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    int a[n], b[n];
    for(int i = 0 ; i < n ; i++)
        cin>>a[i];
    for(int i = 0 ; i < n ; i++)
        cin>>b[i];
    vector<pair<int , int>> vec;
    for(int i = 0 ; i  < n ; i++)
        vec.push_back(make_pair(a[i], b[i]));

    sort(vec.begin(), vec.end());
    for(int i = 0 ; i<vec.size();i++){
        if(vec[i].first <= k)
            k+=vec[i].second;
    }
    cout<<k<<endl;
}
    return 0;
}