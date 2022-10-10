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
    int y;
    int a[n];
    float x = n/2;
    int nop = ceil(x);
    for(int i = 0 ; i< n ; i++){
        cin>>a[i];
    }
    sort(a, a+n);
    y = a[0];
    for(int i = 1; i<= nop; i++){
        cout<<a[i]<<" "<<y<<endl;
    }
}
    return 0;
}