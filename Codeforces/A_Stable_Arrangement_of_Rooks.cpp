#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
int t = 0;
cin>>t;
while(t--)
{
    int n, k;
    cin>>n>>k;
    char a[n][n];
    for(int i = 0; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                a[i][j] = '.';
            }
        }
    if(k> (n+1)/2){
        cout<<"-1"<<endl;
        continue;
    }else{
        for(int i = 0 ; i<n,k>0;i+=2){
            a[i][i] = 'R';
            k--;
        }
        for(int i = 0; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }
        continue;
    }
}
    return 0;
}