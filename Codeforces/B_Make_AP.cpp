#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*
AP Property
(b-a) = (c-b)
=> 2b = c+a
=> c = 2b-a    must be > 0  because then (2b-a)/c will be undefined, same for below
=> a = 2b -c   must be > 0
*/

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       
            ll a, b, c;
            cin >> a >> b >> c;
            ll diff1 = b - a;
            ll diff2 = c - b;                                                                                                                                                                                                                                                                                                                                                                                                                               
            if (diff1 == diff2)
            {
                cout << "YES"<<endl;
                continue;
            }
           if((a+c)%(2*b) == 0){
               cout << "YES"<<endl;
                continue;
           }
           if(2*b-a > 0)
           if(((2*b)-a)%c == 0){
               cout << "YES"<<endl;
                continue;
           }
           if(2*b-c > 0)
           if(((2*b)-c)%a == 0){
               cout << "YES"<<endl;
                continue;
           }
           cout<<"NO"<<endl;
    }
}