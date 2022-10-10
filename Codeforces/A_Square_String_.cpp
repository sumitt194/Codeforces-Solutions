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
    int n = s.length();
    int half = n/2;
    if(n%2 != 0){
        cout<<"NO"<<endl;
        continue;
    }
    else{
        int flag = 0;
        for(int i = 0; i<half ; i++){
            if(s[i] != s[half+i])
                flag = 1;
        }
        if(flag == 0){
            cout<<"YES"<<endl;
            continue;
        }
        else{
            cout<<"NO"<<endl;
            continue;
        }
    }
}
    return 0;
}