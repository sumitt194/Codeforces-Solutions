#include <bits/stdc++.h>
using namespace std;

#define ll long long
bool isEven(ll n)
{
    return (n % 2 == 0);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        if (t >= 0)
        {
            int a, b, c;
            cin >> a >> b >> c;
            if (a + b == c || b + c == a || c + a == b)
                cout << "YES"<<endl;
            else if ((a == b and c % 2 == 0) || (b == c and a % 2 == 0) || ((c == a and b % 2 == 0)))
                cout << "YES"<<endl;
            else
                cout << "NO"<<endl;
            
        }
    }
}