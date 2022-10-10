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
    map<int, int> m;
    map<int, int>::iterator itr;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
        m[a[i]]++;
    }
    for(itr = m.begin(); itr!=m.end();itr++){
        if(itr->second >= 2 && itr->first != 0){
            int temp = itr->first;
            itr->second = itr->second-1;
            temp = -temp;
            m[temp]++;
        }
    }
    // for(itr = m.begin(); itr!=m.end();itr++){
    //     cout<<itr->first<<" "<<itr->second<<endl;
    // }
    // cout<<endl;
    cout<<m.size()<<endl;
}
    return 0;
}