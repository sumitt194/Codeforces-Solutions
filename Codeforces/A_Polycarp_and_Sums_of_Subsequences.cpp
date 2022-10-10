#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
int t = 0;
cin>>t;
while(t--)
{
    ll b[7], a[3];
    for(int i = 0 ; i< 7; i++)
        cin>>b[i];
    
    a[0] = b[0];
    a[1] = b[1];
    a[2] = b[6] - a[0] - a[1];
    for(int i = 0 ; i < 3; i++)
        cout<<a[i]<<" ";
    
    cout<<endl;
}
    return 0;
}