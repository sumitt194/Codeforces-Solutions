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
    string a[n-2];
    string s = "";
    int flag = 0;
    for(int i = 0; i < n-2 ; i++){
        cin>>a[i];
        if(i==0){
            s+=a[i];
            continue;
        }
        else{
            if(a[i][0] == a[i-1][1]){
                s+=a[i][1];
            }
            else{
                s+=a[i];
                flag = 1;
            }
        }
    }
    if(flag == 0)
        s+="a";
    
    cout<<s<<endl;
}
    return 0;
}