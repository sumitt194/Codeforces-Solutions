#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
int t = 0;
cin>>t;
while(t--)
{

    int n , k; 
    cin>>n>>k;
    string s;
    cin>>s;
    string copy = s;
    int flag = 1;
    reverse(copy.begin(), copy.end());
    if(s==copy || k==0){
        cout<<"1"<<endl;
        continue;
    }else{
        cout<<"2"<<endl;
        continue;
    }
}
    return 0;
}