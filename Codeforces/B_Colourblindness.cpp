#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    int t = 0;
    cin>>t;
    while(t--){
        int n; cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        if(s1.length() != s2.length()){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            bool res = false;
            for(int i = 0 ; i < s1.length() ; i++){
                if(s1[i] == 'G' || s1[i] == 'B') s1[i] = 'B';
                if(s2[i] == 'G' || s2[i] == 'B') s2[i] = 'B';
            }
            if(s1==s2){
                cout<<"YES"<<endl;continue;
            }
            else{
                cout<<"NO"<<endl;continue;
            }
        }
    }
    return 0;
}