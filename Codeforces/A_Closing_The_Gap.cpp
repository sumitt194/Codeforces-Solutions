#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
int t = 0;
cin>>t;
while(t--)
{
    int n; 
    cin>>n;
    int a[n];
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
        sum+=a[i];
    }
    (sum%n == 0) ? cout<<"0"<<endl : cout<<"1"<<endl;
}
    return 0;
}