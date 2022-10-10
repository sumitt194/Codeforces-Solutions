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
    if(n%7 == 0){
        cout<<n<<endl;
        continue;
    }
    else{
        while(n%7){
            n++;
            if(n%10 == 0)
                n-=10;
        }
        cout<<n<<endl;
        continue;
    }
}
    return 0;
}