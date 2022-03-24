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
	int n,x;
	cin >> n >> x;
	int a[n],b[n];
	FOR(i,0,n-1) cin >> a[i],b[i] = a[i];
	sort(b,b+n);
	int check = 0;
	for(int i=0;i<n;i++){
		if(i-x<0 && i+x>=n && a[i]!=b[i]) check = 1;
	}
	if(!check) cout <<"YES"<< endl;
	else cout <<"NO"<< endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}

