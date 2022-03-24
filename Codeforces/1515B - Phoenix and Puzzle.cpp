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
bool check(int x){
	ll a = sqrt(x);
	if(a*a == x) return true;
	return false;
}
int main(){
	faster;
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n%2 != 0){
			cout <<"NO"<< endl;
			continue;
		}
		int m = n/2;
		if(check(m)){
			cout <<"YES"<< endl;
			continue;
		}
		if(n%4 != 0){
			cout <<"NO"<< endl;
			continue;
		}
		m = n/4;
		if(check(m)){
			cout <<"YES"<< endl;
			continue;
		}
		cout <<"NO"<< endl;
	}
}

