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

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n,sum(0);
		cin >> n;
		for(int i=0;i<n;i++){
			ll a;
			cin >> a;
			if(a <= 2048) sum += a;
		}	
		if(sum >= 2048) cout <<"YES"<<endl;
		else cout <<"NO"<<endl;
	}
}

