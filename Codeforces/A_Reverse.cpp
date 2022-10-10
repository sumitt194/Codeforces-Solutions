#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
int t = 0;
cin>>t;
while(t--)
{
    int n ;
    cin>>n;
    vector<int> v1,v2;
    for(int i = 0 ; i<n;i++){
        int x;
        cin>>x;
        v1.push_back(x);
        v2.push_back(i+1);
    }
    if(n == 1){
        cout<<v1[0]<<endl;
        continue;
    }
    int ele = -1, start = -1;
    for(int i = 0 ; i  < n; i ++){
        if(v1[i] != v2[i]){
            ele = i+1;
            start = i;
            break;
        }
    }
    if(start == -1){
        for(auto x: v1)
            cout<<x<<" ";
        cout<<endl;
        continue;
    }
    else{
        int end = -1;
        for(int i = 0 ; i  < n ; i++){
            if(v1[i] == ele){
                end = i;
                break;
            }
        }
        reverse(v1.begin()+start , v1.begin()+end+1);
        for(auto x: v1)
            cout<<x<<" ";
        cout<<endl;
    }
}
    return 0;
}