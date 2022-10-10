#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    int t = 0;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        if(s == "yes")
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}