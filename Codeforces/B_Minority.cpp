#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
int t = 0;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    int x = 0 , y = 0;
    int n = s.size();
    for(auto i: s){
        if(i == '1')
            x++;
        else 
            y++;
    }
    if(x == y) cout<<x-1<<endl;
    else cout<<min(x, y)<<endl;
}
    return 0;
}