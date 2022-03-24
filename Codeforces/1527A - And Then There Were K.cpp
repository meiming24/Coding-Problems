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
	ll n;
	cin >> n;
	ll count = 0;
	while(n!=0){ //n=2  0 0 1
		count++; //cnt =  
		n/=2;	 //n = 0;
	}
	cout << (1<<(count-1)) - 1 << endl;   
}
int main(){
	long int t;
	cin >> t;
	while(t--){
		solve();
	}
}

