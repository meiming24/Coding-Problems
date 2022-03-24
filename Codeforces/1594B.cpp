#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef unsigned long long ull;

#define X first
#define Y second
#define pb push_back
#define mp make_pair
#define ep emplace_back
#define EL printf("\n")
#define sz(A) (int) A.size()
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FOD(i,r,l) for (int i=r;i>=l;i--)
#define fillchar(a,x) memset(a, x, sizeof (a))
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const ll MOD = 1e9 + 7; 
ll root (ll n){
	return (n*n)%MOD;
}
ll binpow(ll a, ll b){
	if(b == 0) return 1%MOD;
	int t = binpow(a,b/2);
	if(b%2 == 0) return root(t)%MOD;
	else return a*(root(t)%MOD)%MOD;
}
void solve(){
	ll n,k;
	cin >> n >> k;
	ll sum = 0;
	ll i = 0;
	while(k){
		if(k%2 == 1){
			sum += binpow(n,i);
			sum %= MOD;
		}
		i++;
		k/=2;
	}
	cout << sum << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}

