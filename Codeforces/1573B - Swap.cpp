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
void solve(){
	int n;
	cin >> n;
	map <ll,ll> index;
	ll a[n];
	FOR(i,0,n-1){
		cin >> a[i];
		index[a[i]] = i;
	}
	map <ll,ll> res;
	res[1] = index[1];
	for(int i=3;i<=2*n-1;i+=2){
		res[i] = min(res[i-2],index[i]);
	}
	ll ans = INT_MAX;
	for(int i=0;i<n;i++){
		ll x;
		cin >> x;
		ans = min(ans,i+res[x-1]);
	}
	cout << ans << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}

