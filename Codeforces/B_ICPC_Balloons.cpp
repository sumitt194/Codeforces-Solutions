#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    int t = 0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        s.resize(n);
        cin>>s;
        set<char> se;
        for( char c: s)
            se.insert(c);
        int diff = s.length()-se.size();
        cout<<(se.size()*2)+diff<<endl;
    }
    return 0;
}