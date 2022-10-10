#include <bits/stdc++.h>
#include <math.h>
#include <chrono>
#include <vector>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define PI 3.14159265358979323846264338327950288419716939937510582097494459230
const ll mod1=1e5;
const ll mod2=1e-5;
const ll mod3=1e7;
const ll mod4=1e-7;
const ll mod5=1e9;
const ll mod6=1e-9;
const ll mod7=1e9+7;
const ll mod8=1e5+5;
const ll N=1e8+10;
#define mod 1e9+7//double
// function to count the number of unique divisors
int countDivisors(int n)
{
	int cnt = 0;
	for (int i = 1; i <= sqrt(n); i++){
		if (n % i == 0) {
			if (n / i == i)
				cnt++;
			else
				cnt = cnt + 2;
		}
	}
	return cnt;
}
void fun(){
	/*ll t=10;
	ll ans=t%((ll)mod);
	cout<<ans<<endl;*/
	/*ll a,b;
	cin>>a>>b;
	ll d=abs(b-a);
	cout<<countDivisors(d)<<endl;*/
	/*ll a,b;
	cin>>a>>b;
	if(a==b)cout<<b<<endl;
	else if(a==0||b==0)cout<<-1<<endl;
	else{
		if(a>b)swap(a,b);
		ll count(0);
		while(a*2<=b){
			++count;
			a*=2;
		}
		if(a==b)cout<<b+count<<endl;
		else if(a<b)cout<<b+count+1<<endl;
	}*/
	/*ll x,n;
	cin>>x>>n;
	cout<<(x-1)*(2*n-x)<<endl;*/
	ll n,x;
	cin>>n>>x;
	if(n<2*x-1){
		cout<<-1<<endl;
		return;
	}
	else{
		string s="";
		char ch='a';
		for(ll i=1;i<=n;++i)s+=ch;
			for(ll i=0;i<=x-2;++i){
				s[i]=s[n-1-i]=++ch;
			}
			cout<<s<<endl;
		}

	}
	int main(){
		ios_base::sync_with_stdio(false);
		std::cin.tie(NULL),std::cout.tie(NULL);
		ll t=1,k=1;
		std::cin>>t;
		while(t--){
	/*ll n,q;
	cin>>n>>q;
	vector<ll>v(n);
	for(ll i=0;i<=n-1;++i){
		cin>>v[i];
	}
	sort(v.begin(),v.end(),greater<ll>());
	ll s=0;
	for(ll i=0;i<=n-1;++i){
		s+=v[i];
		v[i]=s;
	}
	while(q--){
		ll x;
		cin>>x;
		ll s=0;
		ll e=n-1;
		ll ans=0;
		while(s<=e){
			ll mid=s+(e-s)/2;
			if(v[mid]>=x){
				ans=mid+1;
				e=mid-1;
			}
			else{
				s=mid+1;
			}
		}
		if(ans!=0)
			cout<<ans<<endl;
		else cout<<-1<<endl;
	}*/
	/*ll n,q;
	cin>>n>>q;
	ll arr[n+1];
	for(ll i=1;i<=n;++i)cin>>arr[i];
		ll pf[n+1]={0};
	ll s=0;
	for(ll i=1;i<=n;++i){
		s+=arr[i];
		pf[i]=s;
	}
	//for(ll i=1;i<=n;++i)cout<<pf[i]<<" ";
	while(q--){
		ll t,i,x;
		cin>>t;
		if(t==1){
			cin>>i>>x;
			arr[i]=x;
			cout<<pf[n]-(pf[i]-pf[i-1])+x<<endl;
		}
		else{
			cin>>x;
			cout<<x*n<<endl;

		}


	}*/
		/*ll n,m;
		cin>>n>>m;
		ll arr[n];
		for(ll i=0;i<=n-1;++i)cin>>arr[i];
	    ll ans=0;
	    ll maxx=*max_element(arr,arr+n);
	    for(ll i=0;i<=n-1;++i){
	    	ans=max(ans,arr[i]+maxx+((arr[i]-maxx)%m+m)%m);
	    }
	    cout<<ans<<endl;*/

		/*ll n,k,l,c,d,p,nl,np;
		cin>>n>>k>>l>>c>>d>>p>>nl>>np;
		cout<<min((k*l)/nl,min(c*d,p/np))/n<<endl;*/
		//cout<<"Case #"<<k<<":"<<" ";
		/*ll n,m,k;cin>>n>>m>>k;
		bitset<32>arr[m+2];
		for(ll i=1;i<=m+1;++i){
			ll t;
			cin>>t;
			arr[i]=t;
		}
		ll ans=0;
		for(ll i=1;i<=m;++i)
		{
			ll k_d=0;
			for(ll j=0;j<=31;++j){
				if(arr[m+1][j]!=arr[i][j])++k_d;
			}
			if(k_d<=k)++ans;
		}
		cout<<ans<<endl;*/
			fun();
		}
		return 0;
	}
