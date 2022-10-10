#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long l, r;
        cin>>l>>r;
        int count = 0;
        for(int i = l ; i  <= r; i++){
            long j = floor(sqrt(i));
            if(i % j == 0) count++;
        }
        cout<<count<<endl;
    }
}