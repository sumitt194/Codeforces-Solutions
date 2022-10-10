#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
int t = 0;
cin>>t;
while(t--)
{
    int n, m , i ,j, ti, tj;
    cin>>n>>m>>i>>j>>ti>>tj;
    int di = 1, dj = 1, ans = 0;
    while(i != ti && j != tj){
        if(i+di > n || i+di<1) di*=-1;
        if(j+dj > m || j+dj < 1) dj*=-1;
        i+=di;
        j+=dj;
        ans++;
    }
    cout<<ans<<endl;
}
    return 0;
}