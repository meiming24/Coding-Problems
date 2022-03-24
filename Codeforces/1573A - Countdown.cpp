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
	string s;
	cin >> s;
	int dem(0);
	for(int i=0;i<n-1;i++){
		if(s[i] != '0'){
			dem += (int) s[i] - '0';
			dem++;
		}
	}
	if(s[n-1] != 0) {
		dem += (int) s[n-1] - '0';
	}
	cout << dem << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}

