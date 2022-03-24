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
int a[1000000] = {0};
void create(){
	for(int i=2;i<=1000000;i++){
		if(a[i] == 0){
			for(int j=2;i*j<=1000000;j++){
				a[i*j] = 1;
			}
		}
	}
}
int main(){
	int t;
	cin >> t;
	create();
	while(t--){
		ll n;
		cin >> n;
		ll b;
		b = sqrt(n);
		if(n == 1) cout <<"NO"<< endl;
		else if((b*b == n) && (a[b] == 0)){
		cout <<"YES"<< endl;
		}
		else cout <<"NO"<< endl;
	}
}
