// #include<bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define log log10

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//        ll x1,p1;
//        ll x2,p2;
//     cin>>x1>>p1;
//     cin>>x2>>p2;
//     if(x1!=x2) {
//         if(p1==p2) {
//             if(x1>x2)
//             cout<<">"<<endl;
//             else
//             cout<<"<"<<endl;
//         }
//         else {
//             ll temp1 = log(x1) + 1+p1,temp2 = log(x2) + 1+p2;
//             if(temp1>temp2)
//             cout<<">"<<endl;
//             else if(temp1<temp2)
//             cout<<"<"<<endl;
//             else {
//                 string s = to_string(x1),p = to_string(x2);
//                 ll size = min(s.size(),p.size());
//                 char result = '=';
//                 for(ll i=0;i<size;i++) {
//                     if(s[i]>p[i]) {
//                         result = '>';
//                         break;
//                     }
//                     if(p[i]>s[i]) {
//                         result = '<';
//                         break;
//                     }
//                 }
//                 if(result=='=') {
//                     if(s.size()>p.size()) {
//                         for(ll i=size;i<s.size();i++) {
//                             if(s[i]!='0'){
//                                 result = '>';
//                                 break;
//                             }
//                         }
//                     }
//                     else {
//                         for(ll i=size;i<p.size();i++) {
//                             if(p[i]!='0'){
//                                 result = '<';
//                                 break;
//                             }
//                         }
//                     }
//                 }
//                 cout<<result<<endl;
//             }
//         }
        
//     }
//     else
//     {
//         if(p1==p2)
//         cout<<"="<<endl;
//         else {
//             if(p1>p2)
//             cout<<">"<<endl;
//             else
//             cout<<"<"<<endl;
//         }
//     }
//     }
// }



#include<bits/stdc++.h>
#include <cmath>
using namespace std;

#define ll long long

int count_digit(ll number) {
   int count = 0;
   while(number != 0) {
      number = number / 10;
      count++;
   }
   return count;
}

int main()
{
int t = 0;
cin>>t;
while(t--)
{
    ll x1,x2,p1,p2;
    cin>>x1>>p1>>x2>>p2;
    ll no1 = count_digit(x1)+p1;
    ll no2 = count_digit(x2)+p2;
    int mn = min(p1, p2);
		p1 -= mn;
		p2 -= mn;
    if(no1>no2){
        cout<<">"<<endl;
        continue;
    }else if(no2>no1){
        cout<<"<"<<endl;
        continue;
    }
    else if(no1 == no2){
        for (int i = 0; i < p1; ++i) x1 *= 10;
			for (int i = 0; i < p2; ++i) x2 *= 10;
			if (x1 < x2)
				cout << "<" << endl;
			else if (x1 > x2)
				cout << ">" << endl;
			else
				cout << "=" << endl;
    }
    else{
        cout<<"="<<endl;
        continue;
    }
}
    return 0;
}