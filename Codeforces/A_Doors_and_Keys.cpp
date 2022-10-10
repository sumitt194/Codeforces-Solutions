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
    map<char, int> mc;
    map<char, int>::iterator itr;
    bool ans = true;
    int flag = 0;
    int result = 0;
    for(int i = 0 ; i< s.length(); i++)
        if(s[i] == 'r' || s[i] == 'g' || s[i] == 'b')
            mc.insert({s[i], i});
    
    for(int i = 0 ; i<s.length(); i++){
        if(s[i] == 'G')
        {
            if(mc['g'] < i)
                result = result+1;
        }
        else if(s[i] == 'R')
        {
            if(mc['r'] < i)
                result = result+1;
            flag++;
        }
        else if(s[i] == 'B')
        {
            if(mc['b'] < i)
                result = result+1;
            flag++;
        }
    }
    flag = 1;
    if(result == 3 && ans ==true && flag == 1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
    return 0;
}