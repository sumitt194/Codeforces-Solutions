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
    int n = 0;
    for(int i = 0 ; i<s.length(); i++){
        if(s[i] == 'N')
            n++;
    }
    if(n==1){
        cout<<"NO"<<endl;
        continue;
    }else{
        cout<<"YES"<<endl;
        continue;
    }
}
    return 0;
}