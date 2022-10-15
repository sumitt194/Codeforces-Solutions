#include <bits/stdc++.h>
typedef long long int ll;
 
#define endl                                   "\n"
#define yes                                    "YES\n"
#define no                                     "NO\n"
#define vi                                     vector<int>
#define all(x)                                 x.begin(),x.end()


int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        vector<string> v;
        for (int i = 0; i < 8; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        int RED,BLUE;
        for(int i=0;i<8;i++){
            BLUE=0;
            RED=0;
            int red=0,blue=0;
            for(int j=0;j<8;j++)
            {
                if(v[i][j]=='R'){
                    red++;
                }
                if(v[j][i]=='B'){
                    blue++;
                }
            }
            if(red==8){
                BLUE=1;
                break;
            }
            if(blue==8){
                RED=1;
                break;
            }
        }
 
        if(BLUE==1){
            cout<<"R\n";
        }
        else if(RED==1){
            cout<<"B\n";
        }
    }
    return 0;
}
