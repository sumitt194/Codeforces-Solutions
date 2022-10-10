#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
int t = 0;
cin>>t;
while(t--)
{
    int x, y;
    cin>>x>>y;
    if(x==y){
        cout<<x+y-1<<endl;
        continue;
    }else{
        cout<<x+y<<endl;
        continue;
    }
}
    return 0;
}