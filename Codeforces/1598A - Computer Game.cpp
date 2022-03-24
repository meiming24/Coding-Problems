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
	char a[300];
	char b[300];
	
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	
	for(int i=0;i<n;i++){
		cin >> b[i];
	} 
	
	for(int i=0;i<n;i++){
		if(a[i] == '1' && b[i] == '1'){
			cout <<"NO"<< endl;
			return;
		}
	}
	cout <<"YES"<< endl;
	return;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}

